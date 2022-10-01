// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCELERATORATTRIBUTESRESPONSE_P_H
#define QTAWS_UPDATEACCELERATORATTRIBUTESRESPONSE_P_H

#include "globalacceleratorresponse_p.h"

namespace QtAws {
namespace GlobalAccelerator {

class UpdateAcceleratorAttributesResponse;

class UpdateAcceleratorAttributesResponsePrivate : public GlobalAcceleratorResponsePrivate {

public:

    explicit UpdateAcceleratorAttributesResponsePrivate(UpdateAcceleratorAttributesResponse * const q);

    void parseUpdateAcceleratorAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAcceleratorAttributesResponse)
    Q_DISABLE_COPY(UpdateAcceleratorAttributesResponsePrivate)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
