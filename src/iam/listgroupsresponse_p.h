// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPSRESPONSE_P_H
#define QTAWS_LISTGROUPSRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class ListGroupsResponse;

class ListGroupsResponsePrivate : public IamResponsePrivate {

public:

    explicit ListGroupsResponsePrivate(ListGroupsResponse * const q);

    void parseListGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListGroupsResponse)
    Q_DISABLE_COPY(ListGroupsResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
