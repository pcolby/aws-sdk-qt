// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELISTENERRESPONSE_P_H
#define QTAWS_UPDATELISTENERRESPONSE_P_H

#include "globalacceleratorresponse_p.h"

namespace QtAws {
namespace GlobalAccelerator {

class UpdateListenerResponse;

class UpdateListenerResponsePrivate : public GlobalAcceleratorResponsePrivate {

public:

    explicit UpdateListenerResponsePrivate(UpdateListenerResponse * const q);

    void parseUpdateListenerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateListenerResponse)
    Q_DISABLE_COPY(UpdateListenerResponsePrivate)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
