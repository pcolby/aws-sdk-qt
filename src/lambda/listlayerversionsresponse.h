// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLAYERVERSIONSRESPONSE_H
#define QTAWS_LISTLAYERVERSIONSRESPONSE_H

#include "lambdaresponse.h"
#include "listlayerversionsrequest.h"

namespace QtAws {
namespace Lambda {

class ListLayerVersionsResponsePrivate;

class QTAWSLAMBDA_EXPORT ListLayerVersionsResponse : public LambdaResponse {
    Q_OBJECT

public:
    ListLayerVersionsResponse(const ListLayerVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListLayerVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLayerVersionsResponse)
    Q_DISABLE_COPY(ListLayerVersionsResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif
