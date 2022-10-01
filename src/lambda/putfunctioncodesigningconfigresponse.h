// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTFUNCTIONCODESIGNINGCONFIGRESPONSE_H
#define QTAWS_PUTFUNCTIONCODESIGNINGCONFIGRESPONSE_H

#include "lambdaresponse.h"
#include "putfunctioncodesigningconfigrequest.h"

namespace QtAws {
namespace Lambda {

class PutFunctionCodeSigningConfigResponsePrivate;

class QTAWSLAMBDA_EXPORT PutFunctionCodeSigningConfigResponse : public LambdaResponse {
    Q_OBJECT

public:
    PutFunctionCodeSigningConfigResponse(const PutFunctionCodeSigningConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutFunctionCodeSigningConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutFunctionCodeSigningConfigResponse)
    Q_DISABLE_COPY(PutFunctionCodeSigningConfigResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif
