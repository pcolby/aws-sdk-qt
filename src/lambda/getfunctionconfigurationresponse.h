// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFUNCTIONCONFIGURATIONRESPONSE_H
#define QTAWS_GETFUNCTIONCONFIGURATIONRESPONSE_H

#include "lambdaresponse.h"
#include "getfunctionconfigurationrequest.h"

namespace QtAws {
namespace Lambda {

class GetFunctionConfigurationResponsePrivate;

class QTAWSLAMBDA_EXPORT GetFunctionConfigurationResponse : public LambdaResponse {
    Q_OBJECT

public:
    GetFunctionConfigurationResponse(const GetFunctionConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFunctionConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFunctionConfigurationResponse)
    Q_DISABLE_COPY(GetFunctionConfigurationResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif
