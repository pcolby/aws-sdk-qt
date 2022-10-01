// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVOLUMERESPONSE_P_H
#define QTAWS_UPDATEVOLUMERESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class UpdateVolumeResponse;

class UpdateVolumeResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit UpdateVolumeResponsePrivate(UpdateVolumeResponse * const q);

    void parseUpdateVolumeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateVolumeResponse)
    Q_DISABLE_COPY(UpdateVolumeResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
