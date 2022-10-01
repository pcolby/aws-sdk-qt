// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTASSIGNMENTDELETIONSTATUSRESPONSE_P_H
#define QTAWS_LISTACCOUNTASSIGNMENTDELETIONSTATUSRESPONSE_P_H

#include "ssoadminresponse_p.h"

namespace QtAws {
namespace SsoAdmin {

class ListAccountAssignmentDeletionStatusResponse;

class ListAccountAssignmentDeletionStatusResponsePrivate : public SsoAdminResponsePrivate {

public:

    explicit ListAccountAssignmentDeletionStatusResponsePrivate(ListAccountAssignmentDeletionStatusResponse * const q);

    void parseListAccountAssignmentDeletionStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAccountAssignmentDeletionStatusResponse)
    Q_DISABLE_COPY(ListAccountAssignmentDeletionStatusResponsePrivate)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
