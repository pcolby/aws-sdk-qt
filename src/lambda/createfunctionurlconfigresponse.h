// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFUNCTIONURLCONFIGRESPONSE_H
#define QTAWS_CREATEFUNCTIONURLCONFIGRESPONSE_H

#include "lambdaresponse.h"
#include "createfunctionurlconfigrequest.h"

namespace QtAws {
namespace Lambda {

class CreateFunctionUrlConfigResponsePrivate;

class QTAWSLAMBDA_EXPORT CreateFunctionUrlConfigResponse : public LambdaResponse {
    Q_OBJECT

public:
    CreateFunctionUrlConfigResponse(const CreateFunctionUrlConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateFunctionUrlConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFunctionUrlConfigResponse)
    Q_DISABLE_COPY(CreateFunctionUrlConfigResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif
