// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCELERATORRESPONSE_P_H
#define QTAWS_UPDATEACCELERATORRESPONSE_P_H

#include "globalacceleratorresponse_p.h"

namespace QtAws {
namespace GlobalAccelerator {

class UpdateAcceleratorResponse;

class UpdateAcceleratorResponsePrivate : public GlobalAcceleratorResponsePrivate {

public:

    explicit UpdateAcceleratorResponsePrivate(UpdateAcceleratorResponse * const q);

    void parseUpdateAcceleratorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAcceleratorResponse)
    Q_DISABLE_COPY(UpdateAcceleratorResponsePrivate)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
