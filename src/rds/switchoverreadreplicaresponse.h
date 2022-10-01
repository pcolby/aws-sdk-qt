// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SWITCHOVERREADREPLICARESPONSE_H
#define QTAWS_SWITCHOVERREADREPLICARESPONSE_H

#include "rdsresponse.h"
#include "switchoverreadreplicarequest.h"

namespace QtAws {
namespace Rds {

class SwitchoverReadReplicaResponsePrivate;

class QTAWSRDS_EXPORT SwitchoverReadReplicaResponse : public RdsResponse {
    Q_OBJECT

public:
    SwitchoverReadReplicaResponse(const SwitchoverReadReplicaRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SwitchoverReadReplicaRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SwitchoverReadReplicaResponse)
    Q_DISABLE_COPY(SwitchoverReadReplicaResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
