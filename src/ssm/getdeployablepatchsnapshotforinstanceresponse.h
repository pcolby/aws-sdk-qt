// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEPLOYABLEPATCHSNAPSHOTFORINSTANCERESPONSE_H
#define QTAWS_GETDEPLOYABLEPATCHSNAPSHOTFORINSTANCERESPONSE_H

#include "ssmresponse.h"
#include "getdeployablepatchsnapshotforinstancerequest.h"

namespace QtAws {
namespace Ssm {

class GetDeployablePatchSnapshotForInstanceResponsePrivate;

class QTAWSSSM_EXPORT GetDeployablePatchSnapshotForInstanceResponse : public SsmResponse {
    Q_OBJECT

public:
    GetDeployablePatchSnapshotForInstanceResponse(const GetDeployablePatchSnapshotForInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDeployablePatchSnapshotForInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeployablePatchSnapshotForInstanceResponse)
    Q_DISABLE_COPY(GetDeployablePatchSnapshotForInstanceResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
