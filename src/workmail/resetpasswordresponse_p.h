// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETPASSWORDRESPONSE_P_H
#define QTAWS_RESETPASSWORDRESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class ResetPasswordResponse;

class ResetPasswordResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit ResetPasswordResponsePrivate(ResetPasswordResponse * const q);

    void parseResetPasswordResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ResetPasswordResponse)
    Q_DISABLE_COPY(ResetPasswordResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
