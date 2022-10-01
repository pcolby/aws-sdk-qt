// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERCONTAINERIMAGERESPONSE_P_H
#define QTAWS_REGISTERCONTAINERIMAGERESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class RegisterContainerImageResponse;

class RegisterContainerImageResponsePrivate : public LightsailResponsePrivate {

public:

    explicit RegisterContainerImageResponsePrivate(RegisterContainerImageResponse * const q);

    void parseRegisterContainerImageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterContainerImageResponse)
    Q_DISABLE_COPY(RegisterContainerImageResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
