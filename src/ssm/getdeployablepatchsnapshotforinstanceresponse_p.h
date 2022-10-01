// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEPLOYABLEPATCHSNAPSHOTFORINSTANCERESPONSE_P_H
#define QTAWS_GETDEPLOYABLEPATCHSNAPSHOTFORINSTANCERESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class GetDeployablePatchSnapshotForInstanceResponse;

class GetDeployablePatchSnapshotForInstanceResponsePrivate : public SsmResponsePrivate {

public:

    explicit GetDeployablePatchSnapshotForInstanceResponsePrivate(GetDeployablePatchSnapshotForInstanceResponse * const q);

    void parseGetDeployablePatchSnapshotForInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDeployablePatchSnapshotForInstanceResponse)
    Q_DISABLE_COPY(GetDeployablePatchSnapshotForInstanceResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
