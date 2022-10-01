// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCOUNTALIASRESPONSE_P_H
#define QTAWS_DELETEACCOUNTALIASRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class DeleteAccountAliasResponse;

class DeleteAccountAliasResponsePrivate : public IamResponsePrivate {

public:

    explicit DeleteAccountAliasResponsePrivate(DeleteAccountAliasResponse * const q);

    void parseDeleteAccountAliasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAccountAliasResponse)
    Q_DISABLE_COPY(DeleteAccountAliasResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
