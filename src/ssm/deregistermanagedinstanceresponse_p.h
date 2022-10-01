// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERMANAGEDINSTANCERESPONSE_P_H
#define QTAWS_DEREGISTERMANAGEDINSTANCERESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class DeregisterManagedInstanceResponse;

class DeregisterManagedInstanceResponsePrivate : public SsmResponsePrivate {

public:

    explicit DeregisterManagedInstanceResponsePrivate(DeregisterManagedInstanceResponse * const q);

    void parseDeregisterManagedInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeregisterManagedInstanceResponse)
    Q_DISABLE_COPY(DeregisterManagedInstanceResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
