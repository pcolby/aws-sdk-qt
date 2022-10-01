// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICEINSTANCERESPONSE_P_H
#define QTAWS_UPDATESERVICEINSTANCERESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class UpdateServiceInstanceResponse;

class UpdateServiceInstanceResponsePrivate : public ProtonResponsePrivate {

public:

    explicit UpdateServiceInstanceResponsePrivate(UpdateServiceInstanceResponse * const q);

    void parseUpdateServiceInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateServiceInstanceResponse)
    Q_DISABLE_COPY(UpdateServiceInstanceResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
