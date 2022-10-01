// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSIGNINSTANCERESPONSE_P_H
#define QTAWS_ASSIGNINSTANCERESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class AssignInstanceResponse;

class AssignInstanceResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit AssignInstanceResponsePrivate(AssignInstanceResponse * const q);

    void parseAssignInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssignInstanceResponse)
    Q_DISABLE_COPY(AssignInstanceResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
