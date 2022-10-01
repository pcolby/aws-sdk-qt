// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPLICATIONCONFIGURATIONRESPONSE_P_H
#define QTAWS_GETREPLICATIONCONFIGURATIONRESPONSE_P_H

#include "drsresponse_p.h"

namespace QtAws {
namespace Drs {

class GetReplicationConfigurationResponse;

class GetReplicationConfigurationResponsePrivate : public DrsResponsePrivate {

public:

    explicit GetReplicationConfigurationResponsePrivate(GetReplicationConfigurationResponse * const q);

    void parseGetReplicationConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetReplicationConfigurationResponse)
    Q_DISABLE_COPY(GetReplicationConfigurationResponsePrivate)

};

} // namespace Drs
} // namespace QtAws

#endif
