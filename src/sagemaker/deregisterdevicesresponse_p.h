// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERDEVICESRESPONSE_P_H
#define QTAWS_DEREGISTERDEVICESRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DeregisterDevicesResponse;

class DeregisterDevicesResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DeregisterDevicesResponsePrivate(DeregisterDevicesResponse * const q);

    void parseDeregisterDevicesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeregisterDevicesResponse)
    Q_DISABLE_COPY(DeregisterDevicesResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
