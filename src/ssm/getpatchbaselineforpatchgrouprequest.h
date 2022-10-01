// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPATCHBASELINEFORPATCHGROUPREQUEST_H
#define QTAWS_GETPATCHBASELINEFORPATCHGROUPREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class GetPatchBaselineForPatchGroupRequestPrivate;

class QTAWSSSM_EXPORT GetPatchBaselineForPatchGroupRequest : public SsmRequest {

public:
    GetPatchBaselineForPatchGroupRequest(const GetPatchBaselineForPatchGroupRequest &other);
    GetPatchBaselineForPatchGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPatchBaselineForPatchGroupRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
