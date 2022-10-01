// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTASSIGNMENTSRESPONSE_P_H
#define QTAWS_LISTACCOUNTASSIGNMENTSRESPONSE_P_H

#include "ssoadminresponse_p.h"

namespace QtAws {
namespace SsoAdmin {

class ListAccountAssignmentsResponse;

class ListAccountAssignmentsResponsePrivate : public SsoAdminResponsePrivate {

public:

    explicit ListAccountAssignmentsResponsePrivate(ListAccountAssignmentsResponse * const q);

    void parseListAccountAssignmentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAccountAssignmentsResponse)
    Q_DISABLE_COPY(ListAccountAssignmentsResponsePrivate)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
