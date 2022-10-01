// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERPATCHBASELINEFORPATCHGROUPRESPONSE_H
#define QTAWS_REGISTERPATCHBASELINEFORPATCHGROUPRESPONSE_H

#include "ssmresponse.h"
#include "registerpatchbaselineforpatchgrouprequest.h"

namespace QtAws {
namespace Ssm {

class RegisterPatchBaselineForPatchGroupResponsePrivate;

class QTAWSSSM_EXPORT RegisterPatchBaselineForPatchGroupResponse : public SsmResponse {
    Q_OBJECT

public:
    RegisterPatchBaselineForPatchGroupResponse(const RegisterPatchBaselineForPatchGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterPatchBaselineForPatchGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterPatchBaselineForPatchGroupResponse)
    Q_DISABLE_COPY(RegisterPatchBaselineForPatchGroupResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
