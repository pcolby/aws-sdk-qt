// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPLICATIONCONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETEREPLICATIONCONFIGURATIONRESPONSE_P_H

#include "efsresponse_p.h"

namespace QtAws {
namespace Efs {

class DeleteReplicationConfigurationResponse;

class DeleteReplicationConfigurationResponsePrivate : public EfsResponsePrivate {

public:

    explicit DeleteReplicationConfigurationResponsePrivate(DeleteReplicationConfigurationResponse * const q);

    void parseDeleteReplicationConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteReplicationConfigurationResponse)
    Q_DISABLE_COPY(DeleteReplicationConfigurationResponsePrivate)

};

} // namespace Efs
} // namespace QtAws

#endif
