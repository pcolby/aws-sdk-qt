// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNASSIGNVOLUMERESPONSE_P_H
#define QTAWS_UNASSIGNVOLUMERESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class UnassignVolumeResponse;

class UnassignVolumeResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit UnassignVolumeResponsePrivate(UnassignVolumeResponse * const q);

    void parseUnassignVolumeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UnassignVolumeResponse)
    Q_DISABLE_COPY(UnassignVolumeResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
