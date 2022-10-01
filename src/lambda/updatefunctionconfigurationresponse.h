// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFUNCTIONCONFIGURATIONRESPONSE_H
#define QTAWS_UPDATEFUNCTIONCONFIGURATIONRESPONSE_H

#include "lambdaresponse.h"
#include "updatefunctionconfigurationrequest.h"

namespace QtAws {
namespace Lambda {

class UpdateFunctionConfigurationResponsePrivate;

class QTAWSLAMBDA_EXPORT UpdateFunctionConfigurationResponse : public LambdaResponse {
    Q_OBJECT

public:
    UpdateFunctionConfigurationResponse(const UpdateFunctionConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFunctionConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFunctionConfigurationResponse)
    Q_DISABLE_COPY(UpdateFunctionConfigurationResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif
