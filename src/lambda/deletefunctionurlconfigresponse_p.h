// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFUNCTIONURLCONFIGRESPONSE_P_H
#define QTAWS_DELETEFUNCTIONURLCONFIGRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class DeleteFunctionUrlConfigResponse;

class DeleteFunctionUrlConfigResponsePrivate : public LambdaResponsePrivate {

public:

    explicit DeleteFunctionUrlConfigResponsePrivate(DeleteFunctionUrlConfigResponse * const q);

    void parseDeleteFunctionUrlConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFunctionUrlConfigResponse)
    Q_DISABLE_COPY(DeleteFunctionUrlConfigResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
