// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREDBCLUSTERFROMS3RESPONSE_P_H
#define QTAWS_RESTOREDBCLUSTERFROMS3RESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class RestoreDBClusterFromS3Response;

class RestoreDBClusterFromS3ResponsePrivate : public RdsResponsePrivate {

public:

    explicit RestoreDBClusterFromS3ResponsePrivate(RestoreDBClusterFromS3Response * const q);

    void parseRestoreDBClusterFromS3Response(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RestoreDBClusterFromS3Response)
    Q_DISABLE_COPY(RestoreDBClusterFromS3ResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
