// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESUMESESSIONRESPONSE_P_H
#define QTAWS_RESUMESESSIONRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class ResumeSessionResponse;

class ResumeSessionResponsePrivate : public SsmResponsePrivate {

public:

    explicit ResumeSessionResponsePrivate(ResumeSessionResponse * const q);

    void parseResumeSessionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ResumeSessionResponse)
    Q_DISABLE_COPY(ResumeSessionResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
