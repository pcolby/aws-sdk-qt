// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFUNCTIONURLCONFIGRESPONSE_P_H
#define QTAWS_UPDATEFUNCTIONURLCONFIGRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class UpdateFunctionUrlConfigResponse;

class UpdateFunctionUrlConfigResponsePrivate : public LambdaResponsePrivate {

public:

    explicit UpdateFunctionUrlConfigResponsePrivate(UpdateFunctionUrlConfigResponse * const q);

    void parseUpdateFunctionUrlConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFunctionUrlConfigResponse)
    Q_DISABLE_COPY(UpdateFunctionUrlConfigResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
