// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCOUNTALIASRESPONSE_P_H
#define QTAWS_PUTACCOUNTALIASRESPONSE_P_H

#include "supportappresponse_p.h"

namespace QtAws {
namespace SupportApp {

class PutAccountAliasResponse;

class PutAccountAliasResponsePrivate : public SupportAppResponsePrivate {

public:

    explicit PutAccountAliasResponsePrivate(PutAccountAliasResponse * const q);

    void parsePutAccountAliasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutAccountAliasResponse)
    Q_DISABLE_COPY(PutAccountAliasResponsePrivate)

};

} // namespace SupportApp
} // namespace QtAws

#endif
