// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELISTENERRESPONSE_P_H
#define QTAWS_CREATELISTENERRESPONSE_P_H

#include "globalacceleratorresponse_p.h"

namespace QtAws {
namespace GlobalAccelerator {

class CreateListenerResponse;

class CreateListenerResponsePrivate : public GlobalAcceleratorResponsePrivate {

public:

    explicit CreateListenerResponsePrivate(CreateListenerResponse * const q);

    void parseCreateListenerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateListenerResponse)
    Q_DISABLE_COPY(CreateListenerResponsePrivate)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
