// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOPSMETADATAREQUEST_P_H
#define QTAWS_GETOPSMETADATAREQUEST_P_H

#include "ssmrequest_p.h"
#include "getopsmetadatarequest.h"

namespace QtAws {
namespace Ssm {

class GetOpsMetadataRequest;

class GetOpsMetadataRequestPrivate : public SsmRequestPrivate {

public:
    GetOpsMetadataRequestPrivate(const SsmRequest::Action action,
                                   GetOpsMetadataRequest * const q);
    GetOpsMetadataRequestPrivate(const GetOpsMetadataRequestPrivate &other,
                                   GetOpsMetadataRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetOpsMetadataRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
