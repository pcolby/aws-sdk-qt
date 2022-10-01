// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICEINSTANCERESPONSE_P_H
#define QTAWS_GETSERVICEINSTANCERESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class GetServiceInstanceResponse;

class GetServiceInstanceResponsePrivate : public ProtonResponsePrivate {

public:

    explicit GetServiceInstanceResponsePrivate(GetServiceInstanceResponse * const q);

    void parseGetServiceInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetServiceInstanceResponse)
    Q_DISABLE_COPY(GetServiceInstanceResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
