// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERDEVICESRESPONSE_P_H
#define QTAWS_REGISTERDEVICESRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class RegisterDevicesResponse;

class RegisterDevicesResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit RegisterDevicesResponsePrivate(RegisterDevicesResponse * const q);

    void parseRegisterDevicesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterDevicesResponse)
    Q_DISABLE_COPY(RegisterDevicesResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
