// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALIASESRESPONSE_P_H
#define QTAWS_LISTALIASESRESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class ListAliasesResponse;

class ListAliasesResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit ListAliasesResponsePrivate(ListAliasesResponse * const q);

    void parseListAliasesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAliasesResponse)
    Q_DISABLE_COPY(ListAliasesResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
