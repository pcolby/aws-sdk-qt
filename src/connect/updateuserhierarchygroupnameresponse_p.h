// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERHIERARCHYGROUPNAMERESPONSE_P_H
#define QTAWS_UPDATEUSERHIERARCHYGROUPNAMERESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class UpdateUserHierarchyGroupNameResponse;

class UpdateUserHierarchyGroupNameResponsePrivate : public ConnectResponsePrivate {

public:

    explicit UpdateUserHierarchyGroupNameResponsePrivate(UpdateUserHierarchyGroupNameResponse * const q);

    void parseUpdateUserHierarchyGroupNameResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateUserHierarchyGroupNameResponse)
    Q_DISABLE_COPY(UpdateUserHierarchyGroupNameResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
