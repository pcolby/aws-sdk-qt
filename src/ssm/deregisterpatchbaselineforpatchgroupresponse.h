// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERPATCHBASELINEFORPATCHGROUPRESPONSE_H
#define QTAWS_DEREGISTERPATCHBASELINEFORPATCHGROUPRESPONSE_H

#include "ssmresponse.h"
#include "deregisterpatchbaselineforpatchgrouprequest.h"

namespace QtAws {
namespace Ssm {

class DeregisterPatchBaselineForPatchGroupResponsePrivate;

class QTAWSSSM_EXPORT DeregisterPatchBaselineForPatchGroupResponse : public SsmResponse {
    Q_OBJECT

public:
    DeregisterPatchBaselineForPatchGroupResponse(const DeregisterPatchBaselineForPatchGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeregisterPatchBaselineForPatchGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterPatchBaselineForPatchGroupResponse)
    Q_DISABLE_COPY(DeregisterPatchBaselineForPatchGroupResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
