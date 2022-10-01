// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLAYERVERSIONRESPONSE_H
#define QTAWS_GETLAYERVERSIONRESPONSE_H

#include "lambdaresponse.h"
#include "getlayerversionrequest.h"

namespace QtAws {
namespace Lambda {

class GetLayerVersionResponsePrivate;

class QTAWSLAMBDA_EXPORT GetLayerVersionResponse : public LambdaResponse {
    Q_OBJECT

public:
    GetLayerVersionResponse(const GetLayerVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetLayerVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLayerVersionResponse)
    Q_DISABLE_COPY(GetLayerVersionResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif
