// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCODESIGNINGCONFIGRESPONSE_H
#define QTAWS_GETCODESIGNINGCONFIGRESPONSE_H

#include "lambdaresponse.h"
#include "getcodesigningconfigrequest.h"

namespace QtAws {
namespace Lambda {

class GetCodeSigningConfigResponsePrivate;

class QTAWSLAMBDA_EXPORT GetCodeSigningConfigResponse : public LambdaResponse {
    Q_OBJECT

public:
    GetCodeSigningConfigResponse(const GetCodeSigningConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCodeSigningConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCodeSigningConfigResponse)
    Q_DISABLE_COPY(GetCodeSigningConfigResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif
