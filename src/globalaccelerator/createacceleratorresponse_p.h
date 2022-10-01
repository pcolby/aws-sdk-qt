// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCELERATORRESPONSE_P_H
#define QTAWS_CREATEACCELERATORRESPONSE_P_H

#include "globalacceleratorresponse_p.h"

namespace QtAws {
namespace GlobalAccelerator {

class CreateAcceleratorResponse;

class CreateAcceleratorResponsePrivate : public GlobalAcceleratorResponsePrivate {

public:

    explicit CreateAcceleratorResponsePrivate(CreateAcceleratorResponse * const q);

    void parseCreateAcceleratorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAcceleratorResponse)
    Q_DISABLE_COPY(CreateAcceleratorResponsePrivate)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
