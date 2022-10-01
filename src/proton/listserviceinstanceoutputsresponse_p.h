// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICEINSTANCEOUTPUTSRESPONSE_P_H
#define QTAWS_LISTSERVICEINSTANCEOUTPUTSRESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class ListServiceInstanceOutputsResponse;

class ListServiceInstanceOutputsResponsePrivate : public ProtonResponsePrivate {

public:

    explicit ListServiceInstanceOutputsResponsePrivate(ListServiceInstanceOutputsResponse * const q);

    void parseListServiceInstanceOutputsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListServiceInstanceOutputsResponse)
    Q_DISABLE_COPY(ListServiceInstanceOutputsResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
