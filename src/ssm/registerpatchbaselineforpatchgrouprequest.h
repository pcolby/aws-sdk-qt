// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERPATCHBASELINEFORPATCHGROUPREQUEST_H
#define QTAWS_REGISTERPATCHBASELINEFORPATCHGROUPREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class RegisterPatchBaselineForPatchGroupRequestPrivate;

class QTAWSSSM_EXPORT RegisterPatchBaselineForPatchGroupRequest : public SsmRequest {

public:
    RegisterPatchBaselineForPatchGroupRequest(const RegisterPatchBaselineForPatchGroupRequest &other);
    RegisterPatchBaselineForPatchGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterPatchBaselineForPatchGroupRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
