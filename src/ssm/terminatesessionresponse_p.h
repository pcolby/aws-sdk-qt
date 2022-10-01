// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATESESSIONRESPONSE_P_H
#define QTAWS_TERMINATESESSIONRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class TerminateSessionResponse;

class TerminateSessionResponsePrivate : public SsmResponsePrivate {

public:

    explicit TerminateSessionResponsePrivate(TerminateSessionResponse * const q);

    void parseTerminateSessionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TerminateSessionResponse)
    Q_DISABLE_COPY(TerminateSessionResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
