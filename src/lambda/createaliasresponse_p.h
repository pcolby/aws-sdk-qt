// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEALIASRESPONSE_P_H
#define QTAWS_CREATEALIASRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class CreateAliasResponse;

class CreateAliasResponsePrivate : public LambdaResponsePrivate {

public:

    explicit CreateAliasResponsePrivate(CreateAliasResponse * const q);

    void parseCreateAliasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAliasResponse)
    Q_DISABLE_COPY(CreateAliasResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
