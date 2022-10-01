// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTREPLICATIONCONFIGURATIONRESPONSE_P_H
#define QTAWS_PUTREPLICATIONCONFIGURATIONRESPONSE_P_H

#include "ecrresponse_p.h"

namespace QtAws {
namespace Ecr {

class PutReplicationConfigurationResponse;

class PutReplicationConfigurationResponsePrivate : public EcrResponsePrivate {

public:

    explicit PutReplicationConfigurationResponsePrivate(PutReplicationConfigurationResponse * const q);

    void parsePutReplicationConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutReplicationConfigurationResponse)
    Q_DISABLE_COPY(PutReplicationConfigurationResponsePrivate)

};

} // namespace Ecr
} // namespace QtAws

#endif
