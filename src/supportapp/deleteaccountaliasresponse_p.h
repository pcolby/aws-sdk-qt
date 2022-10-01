// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCOUNTALIASRESPONSE_P_H
#define QTAWS_DELETEACCOUNTALIASRESPONSE_P_H

#include "supportappresponse_p.h"

namespace QtAws {
namespace SupportApp {

class DeleteAccountAliasResponse;

class DeleteAccountAliasResponsePrivate : public SupportAppResponsePrivate {

public:

    explicit DeleteAccountAliasResponsePrivate(DeleteAccountAliasResponse * const q);

    void parseDeleteAccountAliasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAccountAliasResponse)
    Q_DISABLE_COPY(DeleteAccountAliasResponsePrivate)

};

} // namespace SupportApp
} // namespace QtAws

#endif
