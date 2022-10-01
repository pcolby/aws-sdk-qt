// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERAPPLICATIONREVISIONRESPONSE_P_H
#define QTAWS_REGISTERAPPLICATIONREVISIONRESPONSE_P_H

#include "codedeployresponse_p.h"

namespace QtAws {
namespace CodeDeploy {

class RegisterApplicationRevisionResponse;

class RegisterApplicationRevisionResponsePrivate : public CodeDeployResponsePrivate {

public:

    explicit RegisterApplicationRevisionResponsePrivate(RegisterApplicationRevisionResponse * const q);

    void parseRegisterApplicationRevisionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterApplicationRevisionResponse)
    Q_DISABLE_COPY(RegisterApplicationRevisionResponsePrivate)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
