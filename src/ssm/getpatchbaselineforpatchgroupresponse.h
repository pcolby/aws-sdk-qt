// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPATCHBASELINEFORPATCHGROUPRESPONSE_H
#define QTAWS_GETPATCHBASELINEFORPATCHGROUPRESPONSE_H

#include "ssmresponse.h"
#include "getpatchbaselineforpatchgrouprequest.h"

namespace QtAws {
namespace Ssm {

class GetPatchBaselineForPatchGroupResponsePrivate;

class QTAWSSSM_EXPORT GetPatchBaselineForPatchGroupResponse : public SsmResponse {
    Q_OBJECT

public:
    GetPatchBaselineForPatchGroupResponse(const GetPatchBaselineForPatchGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPatchBaselineForPatchGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPatchBaselineForPatchGroupResponse)
    Q_DISABLE_COPY(GetPatchBaselineForPatchGroupResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
