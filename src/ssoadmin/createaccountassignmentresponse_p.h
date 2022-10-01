// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCOUNTASSIGNMENTRESPONSE_P_H
#define QTAWS_CREATEACCOUNTASSIGNMENTRESPONSE_P_H

#include "ssoadminresponse_p.h"

namespace QtAws {
namespace SsoAdmin {

class CreateAccountAssignmentResponse;

class CreateAccountAssignmentResponsePrivate : public SsoAdminResponsePrivate {

public:

    explicit CreateAccountAssignmentResponsePrivate(CreateAccountAssignmentResponse * const q);

    void parseCreateAccountAssignmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAccountAssignmentResponse)
    Q_DISABLE_COPY(CreateAccountAssignmentResponsePrivate)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
