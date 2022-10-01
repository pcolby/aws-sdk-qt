// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERTOWORKMAILRESPONSE_P_H
#define QTAWS_REGISTERTOWORKMAILRESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class RegisterToWorkMailResponse;

class RegisterToWorkMailResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit RegisterToWorkMailResponsePrivate(RegisterToWorkMailResponse * const q);

    void parseRegisterToWorkMailResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterToWorkMailResponse)
    Q_DISABLE_COPY(RegisterToWorkMailResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
