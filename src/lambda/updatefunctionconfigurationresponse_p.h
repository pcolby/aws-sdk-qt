// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFUNCTIONCONFIGURATIONRESPONSE_P_H
#define QTAWS_UPDATEFUNCTIONCONFIGURATIONRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class UpdateFunctionConfigurationResponse;

class UpdateFunctionConfigurationResponsePrivate : public LambdaResponsePrivate {

public:

    explicit UpdateFunctionConfigurationResponsePrivate(UpdateFunctionConfigurationResponse * const q);

    void parseUpdateFunctionConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFunctionConfigurationResponse)
    Q_DISABLE_COPY(UpdateFunctionConfigurationResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
