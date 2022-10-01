// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETALIASRESPONSE_P_H
#define QTAWS_GETALIASRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class GetAliasResponse;

class GetAliasResponsePrivate : public LambdaResponsePrivate {

public:

    explicit GetAliasResponsePrivate(GetAliasResponse * const q);

    void parseGetAliasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAliasResponse)
    Q_DISABLE_COPY(GetAliasResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
