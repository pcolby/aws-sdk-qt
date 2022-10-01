// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREPLICATIONCONFIGURATIONRESPONSE_P_H
#define QTAWS_UPDATEREPLICATIONCONFIGURATIONRESPONSE_P_H

#include "mgnresponse_p.h"

namespace QtAws {
namespace Mgn {

class UpdateReplicationConfigurationResponse;

class UpdateReplicationConfigurationResponsePrivate : public MgnResponsePrivate {

public:

    explicit UpdateReplicationConfigurationResponsePrivate(UpdateReplicationConfigurationResponse * const q);

    void parseUpdateReplicationConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateReplicationConfigurationResponse)
    Q_DISABLE_COPY(UpdateReplicationConfigurationResponsePrivate)

};

} // namespace Mgn
} // namespace QtAws

#endif
