// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBYOIPCIDRSRESPONSE_P_H
#define QTAWS_LISTBYOIPCIDRSRESPONSE_P_H

#include "globalacceleratorresponse_p.h"

namespace QtAws {
namespace GlobalAccelerator {

class ListByoipCidrsResponse;

class ListByoipCidrsResponsePrivate : public GlobalAcceleratorResponsePrivate {

public:

    explicit ListByoipCidrsResponsePrivate(ListByoipCidrsResponse * const q);

    void parseListByoipCidrsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListByoipCidrsResponse)
    Q_DISABLE_COPY(ListByoipCidrsResponsePrivate)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
