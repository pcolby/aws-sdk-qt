// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPLICATIONCONFIGURATIONRESPONSE_P_H
#define QTAWS_CREATEREPLICATIONCONFIGURATIONRESPONSE_P_H

#include "efsresponse_p.h"

namespace QtAws {
namespace Efs {

class CreateReplicationConfigurationResponse;

class CreateReplicationConfigurationResponsePrivate : public EfsResponsePrivate {

public:

    explicit CreateReplicationConfigurationResponsePrivate(CreateReplicationConfigurationResponse * const q);

    void parseCreateReplicationConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateReplicationConfigurationResponse)
    Q_DISABLE_COPY(CreateReplicationConfigurationResponsePrivate)

};

} // namespace Efs
} // namespace QtAws

#endif
