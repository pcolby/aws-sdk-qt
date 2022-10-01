// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFUNCTIONURLCONFIGRESPONSE_H
#define QTAWS_GETFUNCTIONURLCONFIGRESPONSE_H

#include "lambdaresponse.h"
#include "getfunctionurlconfigrequest.h"

namespace QtAws {
namespace Lambda {

class GetFunctionUrlConfigResponsePrivate;

class QTAWSLAMBDA_EXPORT GetFunctionUrlConfigResponse : public LambdaResponse {
    Q_OBJECT

public:
    GetFunctionUrlConfigResponse(const GetFunctionUrlConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFunctionUrlConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFunctionUrlConfigResponse)
    Q_DISABLE_COPY(GetFunctionUrlConfigResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif
