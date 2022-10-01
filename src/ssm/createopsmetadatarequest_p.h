// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEOPSMETADATAREQUEST_P_H
#define QTAWS_CREATEOPSMETADATAREQUEST_P_H

#include "ssmrequest_p.h"
#include "createopsmetadatarequest.h"

namespace QtAws {
namespace Ssm {

class CreateOpsMetadataRequest;

class CreateOpsMetadataRequestPrivate : public SsmRequestPrivate {

public:
    CreateOpsMetadataRequestPrivate(const SsmRequest::Action action,
                                   CreateOpsMetadataRequest * const q);
    CreateOpsMetadataRequestPrivate(const CreateOpsMetadataRequestPrivate &other,
                                   CreateOpsMetadataRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateOpsMetadataRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
