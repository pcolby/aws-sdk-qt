// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERINSTANCERESPONSE_P_H
#define QTAWS_REGISTERINSTANCERESPONSE_P_H

#include "servicediscoveryresponse_p.h"

namespace QtAws {
namespace ServiceDiscovery {

class RegisterInstanceResponse;

class RegisterInstanceResponsePrivate : public ServiceDiscoveryResponsePrivate {

public:

    explicit RegisterInstanceResponsePrivate(RegisterInstanceResponse * const q);

    void parseRegisterInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterInstanceResponse)
    Q_DISABLE_COPY(RegisterInstanceResponsePrivate)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
