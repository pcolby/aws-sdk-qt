// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLICATIONREVISIONRESPONSE_P_H
#define QTAWS_GETAPPLICATIONREVISIONRESPONSE_P_H

#include "codedeployresponse_p.h"

namespace QtAws {
namespace CodeDeploy {

class GetApplicationRevisionResponse;

class GetApplicationRevisionResponsePrivate : public CodeDeployResponsePrivate {

public:

    explicit GetApplicationRevisionResponsePrivate(GetApplicationRevisionResponse * const q);

    void parseGetApplicationRevisionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetApplicationRevisionResponse)
    Q_DISABLE_COPY(GetApplicationRevisionResponsePrivate)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
