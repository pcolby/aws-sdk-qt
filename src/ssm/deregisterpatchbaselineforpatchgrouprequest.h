// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERPATCHBASELINEFORPATCHGROUPREQUEST_H
#define QTAWS_DEREGISTERPATCHBASELINEFORPATCHGROUPREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class DeregisterPatchBaselineForPatchGroupRequestPrivate;

class QTAWSSSM_EXPORT DeregisterPatchBaselineForPatchGroupRequest : public SsmRequest {

public:
    DeregisterPatchBaselineForPatchGroupRequest(const DeregisterPatchBaselineForPatchGroupRequest &other);
    DeregisterPatchBaselineForPatchGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterPatchBaselineForPatchGroupRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
