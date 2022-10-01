// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERVOLUMERESPONSE_P_H
#define QTAWS_REGISTERVOLUMERESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class RegisterVolumeResponse;

class RegisterVolumeResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit RegisterVolumeResponsePrivate(RegisterVolumeResponse * const q);

    void parseRegisterVolumeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterVolumeResponse)
    Q_DISABLE_COPY(RegisterVolumeResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
