// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOPSMETADATAREQUEST_P_H
#define QTAWS_DELETEOPSMETADATAREQUEST_P_H

#include "ssmrequest_p.h"
#include "deleteopsmetadatarequest.h"

namespace QtAws {
namespace Ssm {

class DeleteOpsMetadataRequest;

class DeleteOpsMetadataRequestPrivate : public SsmRequestPrivate {

public:
    DeleteOpsMetadataRequestPrivate(const SsmRequest::Action action,
                                   DeleteOpsMetadataRequest * const q);
    DeleteOpsMetadataRequestPrivate(const DeleteOpsMetadataRequestPrivate &other,
                                   DeleteOpsMetadataRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteOpsMetadataRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
