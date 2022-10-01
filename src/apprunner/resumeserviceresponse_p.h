// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESUMESERVICERESPONSE_P_H
#define QTAWS_RESUMESERVICERESPONSE_P_H

#include "apprunnerresponse_p.h"

namespace QtAws {
namespace AppRunner {

class ResumeServiceResponse;

class ResumeServiceResponsePrivate : public AppRunnerResponsePrivate {

public:

    explicit ResumeServiceResponsePrivate(ResumeServiceResponse * const q);

    void parseResumeServiceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ResumeServiceResponse)
    Q_DISABLE_COPY(ResumeServiceResponsePrivate)

};

} // namespace AppRunner
} // namespace QtAws

#endif
