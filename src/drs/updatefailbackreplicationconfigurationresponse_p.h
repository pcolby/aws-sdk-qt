// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFAILBACKREPLICATIONCONFIGURATIONRESPONSE_P_H
#define QTAWS_UPDATEFAILBACKREPLICATIONCONFIGURATIONRESPONSE_P_H

#include "drsresponse_p.h"

namespace QtAws {
namespace Drs {

class UpdateFailbackReplicationConfigurationResponse;

class UpdateFailbackReplicationConfigurationResponsePrivate : public DrsResponsePrivate {

public:

    explicit UpdateFailbackReplicationConfigurationResponsePrivate(UpdateFailbackReplicationConfigurationResponse * const q);

    void parseUpdateFailbackReplicationConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFailbackReplicationConfigurationResponse)
    Q_DISABLE_COPY(UpdateFailbackReplicationConfigurationResponsePrivate)

};

} // namespace Drs
} // namespace QtAws

#endif
