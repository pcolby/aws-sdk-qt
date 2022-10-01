// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERUSERRESPONSE_P_H
#define QTAWS_REGISTERUSERRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class RegisterUserResponse;

class RegisterUserResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit RegisterUserResponsePrivate(RegisterUserResponse * const q);

    void parseRegisterUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterUserResponse)
    Q_DISABLE_COPY(RegisterUserResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
