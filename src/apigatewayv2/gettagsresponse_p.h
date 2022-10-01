// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTAGSRESPONSE_P_H
#define QTAWS_GETTAGSRESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetTagsResponse;

class GetTagsResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit GetTagsResponsePrivate(GetTagsResponse * const q);

    void parseGetTagsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTagsResponse)
    Q_DISABLE_COPY(GetTagsResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
