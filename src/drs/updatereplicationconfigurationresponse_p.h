// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREPLICATIONCONFIGURATIONRESPONSE_P_H
#define QTAWS_UPDATEREPLICATIONCONFIGURATIONRESPONSE_P_H

#include "drsresponse_p.h"

namespace QtAws {
namespace Drs {

class UpdateReplicationConfigurationResponse;

class UpdateReplicationConfigurationResponsePrivate : public DrsResponsePrivate {

public:

    explicit UpdateReplicationConfigurationResponsePrivate(UpdateReplicationConfigurationResponse * const q);

    void parseUpdateReplicationConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateReplicationConfigurationResponse)
    Q_DISABLE_COPY(UpdateReplicationConfigurationResponsePrivate)

};

} // namespace Drs
} // namespace QtAws

#endif
