// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEOPSMETADATAREQUEST_P_H
#define QTAWS_UPDATEOPSMETADATAREQUEST_P_H

#include "ssmrequest_p.h"
#include "updateopsmetadatarequest.h"

namespace QtAws {
namespace Ssm {

class UpdateOpsMetadataRequest;

class UpdateOpsMetadataRequestPrivate : public SsmRequestPrivate {

public:
    UpdateOpsMetadataRequestPrivate(const SsmRequest::Action action,
                                   UpdateOpsMetadataRequest * const q);
    UpdateOpsMetadataRequestPrivate(const UpdateOpsMetadataRequestPrivate &other,
                                   UpdateOpsMetadataRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateOpsMetadataRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
