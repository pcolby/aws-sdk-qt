// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFUNCTIONCODESIGNINGCONFIGRESPONSE_H
#define QTAWS_GETFUNCTIONCODESIGNINGCONFIGRESPONSE_H

#include "lambdaresponse.h"
#include "getfunctioncodesigningconfigrequest.h"

namespace QtAws {
namespace Lambda {

class GetFunctionCodeSigningConfigResponsePrivate;

class QTAWSLAMBDA_EXPORT GetFunctionCodeSigningConfigResponse : public LambdaResponse {
    Q_OBJECT

public:
    GetFunctionCodeSigningConfigResponse(const GetFunctionCodeSigningConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFunctionCodeSigningConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFunctionCodeSigningConfigResponse)
    Q_DISABLE_COPY(GetFunctionCodeSigningConfigResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif
