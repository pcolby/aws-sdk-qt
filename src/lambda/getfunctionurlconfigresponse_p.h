// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFUNCTIONURLCONFIGRESPONSE_P_H
#define QTAWS_GETFUNCTIONURLCONFIGRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class GetFunctionUrlConfigResponse;

class GetFunctionUrlConfigResponsePrivate : public LambdaResponsePrivate {

public:

    explicit GetFunctionUrlConfigResponsePrivate(GetFunctionUrlConfigResponse * const q);

    void parseGetFunctionUrlConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetFunctionUrlConfigResponse)
    Q_DISABLE_COPY(GetFunctionUrlConfigResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
