// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOPSMETADATAREQUEST_P_H
#define QTAWS_LISTOPSMETADATAREQUEST_P_H

#include "ssmrequest_p.h"
#include "listopsmetadatarequest.h"

namespace QtAws {
namespace Ssm {

class ListOpsMetadataRequest;

class ListOpsMetadataRequestPrivate : public SsmRequestPrivate {

public:
    ListOpsMetadataRequestPrivate(const SsmRequest::Action action,
                                   ListOpsMetadataRequest * const q);
    ListOpsMetadataRequestPrivate(const ListOpsMetadataRequestPrivate &other,
                                   ListOpsMetadataRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListOpsMetadataRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
