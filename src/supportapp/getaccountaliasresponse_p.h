// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTALIASRESPONSE_P_H
#define QTAWS_GETACCOUNTALIASRESPONSE_P_H

#include "supportappresponse_p.h"

namespace QtAws {
namespace SupportApp {

class GetAccountAliasResponse;

class GetAccountAliasResponsePrivate : public SupportAppResponsePrivate {

public:

    explicit GetAccountAliasResponsePrivate(GetAccountAliasResponse * const q);

    void parseGetAccountAliasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAccountAliasResponse)
    Q_DISABLE_COPY(GetAccountAliasResponsePrivate)

};

} // namespace SupportApp
} // namespace QtAws

#endif
