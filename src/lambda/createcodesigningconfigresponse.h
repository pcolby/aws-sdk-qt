// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECODESIGNINGCONFIGRESPONSE_H
#define QTAWS_CREATECODESIGNINGCONFIGRESPONSE_H

#include "lambdaresponse.h"
#include "createcodesigningconfigrequest.h"

namespace QtAws {
namespace Lambda {

class CreateCodeSigningConfigResponsePrivate;

class QTAWSLAMBDA_EXPORT CreateCodeSigningConfigResponse : public LambdaResponse {
    Q_OBJECT

public:
    CreateCodeSigningConfigResponse(const CreateCodeSigningConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCodeSigningConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCodeSigningConfigResponse)
    Q_DISABLE_COPY(CreateCodeSigningConfigResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif
