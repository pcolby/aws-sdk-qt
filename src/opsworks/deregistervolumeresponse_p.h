// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERVOLUMERESPONSE_P_H
#define QTAWS_DEREGISTERVOLUMERESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class DeregisterVolumeResponse;

class DeregisterVolumeResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit DeregisterVolumeResponsePrivate(DeregisterVolumeResponse * const q);

    void parseDeregisterVolumeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeregisterVolumeResponse)
    Q_DISABLE_COPY(DeregisterVolumeResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
