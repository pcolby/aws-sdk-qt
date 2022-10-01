// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTASSIGNMENTCREATIONSTATUSRESPONSE_P_H
#define QTAWS_LISTACCOUNTASSIGNMENTCREATIONSTATUSRESPONSE_P_H

#include "ssoadminresponse_p.h"

namespace QtAws {
namespace SsoAdmin {

class ListAccountAssignmentCreationStatusResponse;

class ListAccountAssignmentCreationStatusResponsePrivate : public SsoAdminResponsePrivate {

public:

    explicit ListAccountAssignmentCreationStatusResponsePrivate(ListAccountAssignmentCreationStatusResponse * const q);

    void parseListAccountAssignmentCreationStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAccountAssignmentCreationStatusResponse)
    Q_DISABLE_COPY(ListAccountAssignmentCreationStatusResponsePrivate)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
