// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICESRESPONSE_P_H
#define QTAWS_LISTSERVICESRESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class ListServicesResponse;

class ListServicesResponsePrivate : public ProtonResponsePrivate {

public:

    explicit ListServicesResponsePrivate(ListServicesResponse * const q);

    void parseListServicesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListServicesResponse)
    Q_DISABLE_COPY(ListServicesResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
