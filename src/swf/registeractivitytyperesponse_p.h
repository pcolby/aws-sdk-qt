// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERACTIVITYTYPERESPONSE_P_H
#define QTAWS_REGISTERACTIVITYTYPERESPONSE_P_H

#include "swfresponse_p.h"

namespace QtAws {
namespace Swf {

class RegisterActivityTypeResponse;

class RegisterActivityTypeResponsePrivate : public SwfResponsePrivate {

public:

    explicit RegisterActivityTypeResponsePrivate(RegisterActivityTypeResponse * const q);

    void parseRegisterActivityTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterActivityTypeResponse)
    Q_DISABLE_COPY(RegisterActivityTypeResponsePrivate)

};

} // namespace Swf
} // namespace QtAws

#endif
