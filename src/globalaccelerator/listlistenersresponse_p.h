// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLISTENERSRESPONSE_P_H
#define QTAWS_LISTLISTENERSRESPONSE_P_H

#include "globalacceleratorresponse_p.h"

namespace QtAws {
namespace GlobalAccelerator {

class ListListenersResponse;

class ListListenersResponsePrivate : public GlobalAcceleratorResponsePrivate {

public:

    explicit ListListenersResponsePrivate(ListListenersResponse * const q);

    void parseListListenersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListListenersResponse)
    Q_DISABLE_COPY(ListListenersResponsePrivate)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
