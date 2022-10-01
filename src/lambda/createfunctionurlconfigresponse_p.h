// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFUNCTIONURLCONFIGRESPONSE_P_H
#define QTAWS_CREATEFUNCTIONURLCONFIGRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class CreateFunctionUrlConfigResponse;

class CreateFunctionUrlConfigResponsePrivate : public LambdaResponsePrivate {

public:

    explicit CreateFunctionUrlConfigResponsePrivate(CreateFunctionUrlConfigResponse * const q);

    void parseCreateFunctionUrlConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateFunctionUrlConfigResponse)
    Q_DISABLE_COPY(CreateFunctionUrlConfigResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
