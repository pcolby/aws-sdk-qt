// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTALIASESRESPONSE_P_H
#define QTAWS_LISTACCOUNTALIASESRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class ListAccountAliasesResponse;

class ListAccountAliasesResponsePrivate : public IamResponsePrivate {

public:

    explicit ListAccountAliasesResponsePrivate(ListAccountAliasesResponse * const q);

    void parseListAccountAliasesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAccountAliasesResponse)
    Q_DISABLE_COPY(ListAccountAliasesResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
