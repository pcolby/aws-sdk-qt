// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFAILBACKREPLICATIONCONFIGURATIONRESPONSE_P_H
#define QTAWS_GETFAILBACKREPLICATIONCONFIGURATIONRESPONSE_P_H

#include "drsresponse_p.h"

namespace QtAws {
namespace Drs {

class GetFailbackReplicationConfigurationResponse;

class GetFailbackReplicationConfigurationResponsePrivate : public DrsResponsePrivate {

public:

    explicit GetFailbackReplicationConfigurationResponsePrivate(GetFailbackReplicationConfigurationResponse * const q);

    void parseGetFailbackReplicationConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetFailbackReplicationConfigurationResponse)
    Q_DISABLE_COPY(GetFailbackReplicationConfigurationResponsePrivate)

};

} // namespace Drs
} // namespace QtAws

#endif
