// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALLOWLISTSRESPONSE_P_H
#define QTAWS_LISTALLOWLISTSRESPONSE_P_H

#include "macie2response_p.h"

namespace QtAws {
namespace Macie2 {

class ListAllowListsResponse;

class ListAllowListsResponsePrivate : public Macie2ResponsePrivate {

public:

    explicit ListAllowListsResponsePrivate(ListAllowListsResponse * const q);

    void parseListAllowListsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAllowListsResponse)
    Q_DISABLE_COPY(ListAllowListsResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif
