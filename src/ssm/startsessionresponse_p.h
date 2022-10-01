// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSESSIONRESPONSE_P_H
#define QTAWS_STARTSESSIONRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class StartSessionResponse;

class StartSessionResponsePrivate : public SsmResponsePrivate {

public:

    explicit StartSessionResponsePrivate(StartSessionResponse * const q);

    void parseStartSessionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartSessionResponse)
    Q_DISABLE_COPY(StartSessionResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
