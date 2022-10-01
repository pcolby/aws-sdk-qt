// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCOUNTASSIGNMENTRESPONSE_P_H
#define QTAWS_DELETEACCOUNTASSIGNMENTRESPONSE_P_H

#include "ssoadminresponse_p.h"

namespace QtAws {
namespace SsoAdmin {

class DeleteAccountAssignmentResponse;

class DeleteAccountAssignmentResponsePrivate : public SsoAdminResponsePrivate {

public:

    explicit DeleteAccountAssignmentResponsePrivate(DeleteAccountAssignmentResponse * const q);

    void parseDeleteAccountAssignmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAccountAssignmentResponse)
    Q_DISABLE_COPY(DeleteAccountAssignmentResponsePrivate)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
