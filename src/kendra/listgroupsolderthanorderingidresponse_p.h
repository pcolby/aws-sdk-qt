// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPSOLDERTHANORDERINGIDRESPONSE_P_H
#define QTAWS_LISTGROUPSOLDERTHANORDERINGIDRESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class ListGroupsOlderThanOrderingIdResponse;

class ListGroupsOlderThanOrderingIdResponsePrivate : public KendraResponsePrivate {

public:

    explicit ListGroupsOlderThanOrderingIdResponsePrivate(ListGroupsOlderThanOrderingIdResponse * const q);

    void parseListGroupsOlderThanOrderingIdResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListGroupsOlderThanOrderingIdResponse)
    Q_DISABLE_COPY(ListGroupsOlderThanOrderingIdResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
