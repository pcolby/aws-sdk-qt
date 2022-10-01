// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERHIERARCHYSTRUCTURERESPONSE_P_H
#define QTAWS_UPDATEUSERHIERARCHYSTRUCTURERESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class UpdateUserHierarchyStructureResponse;

class UpdateUserHierarchyStructureResponsePrivate : public ConnectResponsePrivate {

public:

    explicit UpdateUserHierarchyStructureResponsePrivate(UpdateUserHierarchyStructureResponse * const q);

    void parseUpdateUserHierarchyStructureResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateUserHierarchyStructureResponse)
    Q_DISABLE_COPY(UpdateUserHierarchyStructureResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
