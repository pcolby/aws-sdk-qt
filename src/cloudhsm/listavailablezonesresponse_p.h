// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAVAILABLEZONESRESPONSE_P_H
#define QTAWS_LISTAVAILABLEZONESRESPONSE_P_H

#include "cloudhsmresponse_p.h"

namespace QtAws {
namespace CloudHsm {

class ListAvailableZonesResponse;

class ListAvailableZonesResponsePrivate : public CloudHsmResponsePrivate {

public:

    explicit ListAvailableZonesResponsePrivate(ListAvailableZonesResponse * const q);

    void parseListAvailableZonesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAvailableZonesResponse)
    Q_DISABLE_COPY(ListAvailableZonesResponsePrivate)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
