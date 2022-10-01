// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCELERATORRESPONSE_P_H
#define QTAWS_DELETEACCELERATORRESPONSE_P_H

#include "globalacceleratorresponse_p.h"

namespace QtAws {
namespace GlobalAccelerator {

class DeleteAcceleratorResponse;

class DeleteAcceleratorResponsePrivate : public GlobalAcceleratorResponsePrivate {

public:

    explicit DeleteAcceleratorResponsePrivate(DeleteAcceleratorResponse * const q);

    void parseDeleteAcceleratorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAcceleratorResponse)
    Q_DISABLE_COPY(DeleteAcceleratorResponsePrivate)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
