// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCELERATORSRESPONSE_P_H
#define QTAWS_LISTACCELERATORSRESPONSE_P_H

#include "globalacceleratorresponse_p.h"

namespace QtAws {
namespace GlobalAccelerator {

class ListAcceleratorsResponse;

class ListAcceleratorsResponsePrivate : public GlobalAcceleratorResponsePrivate {

public:

    explicit ListAcceleratorsResponsePrivate(ListAcceleratorsResponse * const q);

    void parseListAcceleratorsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAcceleratorsResponse)
    Q_DISABLE_COPY(ListAcceleratorsResponsePrivate)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
