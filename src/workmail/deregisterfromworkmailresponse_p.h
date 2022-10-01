// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERFROMWORKMAILRESPONSE_P_H
#define QTAWS_DEREGISTERFROMWORKMAILRESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class DeregisterFromWorkMailResponse;

class DeregisterFromWorkMailResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit DeregisterFromWorkMailResponsePrivate(DeregisterFromWorkMailResponse * const q);

    void parseDeregisterFromWorkMailResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeregisterFromWorkMailResponse)
    Q_DISABLE_COPY(DeregisterFromWorkMailResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
