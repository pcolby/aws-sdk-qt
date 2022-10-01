// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSIGNVOLUMERESPONSE_P_H
#define QTAWS_ASSIGNVOLUMERESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class AssignVolumeResponse;

class AssignVolumeResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit AssignVolumeResponsePrivate(AssignVolumeResponse * const q);

    void parseAssignVolumeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssignVolumeResponse)
    Q_DISABLE_COPY(AssignVolumeResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
