// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSERHIERARCHYGROUPRESPONSE_P_H
#define QTAWS_CREATEUSERHIERARCHYGROUPRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class CreateUserHierarchyGroupResponse;

class CreateUserHierarchyGroupResponsePrivate : public ConnectResponsePrivate {

public:

    explicit CreateUserHierarchyGroupResponsePrivate(CreateUserHierarchyGroupResponse * const q);

    void parseCreateUserHierarchyGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateUserHierarchyGroupResponse)
    Q_DISABLE_COPY(CreateUserHierarchyGroupResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
