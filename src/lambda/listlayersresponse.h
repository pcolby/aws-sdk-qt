// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLAYERSRESPONSE_H
#define QTAWS_LISTLAYERSRESPONSE_H

#include "lambdaresponse.h"
#include "listlayersrequest.h"

namespace QtAws {
namespace Lambda {

class ListLayersResponsePrivate;

class QTAWSLAMBDA_EXPORT ListLayersResponse : public LambdaResponse {
    Q_OBJECT

public:
    ListLayersResponse(const ListLayersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListLayersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLayersResponse)
    Q_DISABLE_COPY(ListLayersResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif
