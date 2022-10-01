// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSERRESPONSE_P_H
#define QTAWS_CREATEUSERRESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class CreateUserResponse;

class CreateUserResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit CreateUserResponsePrivate(CreateUserResponse * const q);

    void parseCreateUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateUserResponse)
    Q_DISABLE_COPY(CreateUserResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
