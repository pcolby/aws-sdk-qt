// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFUNCTIONCONFIGURATIONRESPONSE_P_H
#define QTAWS_GETFUNCTIONCONFIGURATIONRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class GetFunctionConfigurationResponse;

class GetFunctionConfigurationResponsePrivate : public LambdaResponsePrivate {

public:

    explicit GetFunctionConfigurationResponsePrivate(GetFunctionConfigurationResponse * const q);

    void parseGetFunctionConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetFunctionConfigurationResponse)
    Q_DISABLE_COPY(GetFunctionConfigurationResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
