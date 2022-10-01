// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICEINSTANCESRESPONSE_P_H
#define QTAWS_LISTSERVICEINSTANCESRESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class ListServiceInstancesResponse;

class ListServiceInstancesResponsePrivate : public ProtonResponsePrivate {

public:

    explicit ListServiceInstancesResponsePrivate(ListServiceInstancesResponse * const q);

    void parseListServiceInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListServiceInstancesResponse)
    Q_DISABLE_COPY(ListServiceInstancesResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
