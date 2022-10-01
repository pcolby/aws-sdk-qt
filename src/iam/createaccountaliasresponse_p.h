// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCOUNTALIASRESPONSE_P_H
#define QTAWS_CREATEACCOUNTALIASRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class CreateAccountAliasResponse;

class CreateAccountAliasResponsePrivate : public IamResponsePrivate {

public:

    explicit CreateAccountAliasResponsePrivate(CreateAccountAliasResponse * const q);

    void parseCreateAccountAliasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAccountAliasResponse)
    Q_DISABLE_COPY(CreateAccountAliasResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
