// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCEDATASYNCREQUEST_P_H
#define QTAWS_LISTRESOURCEDATASYNCREQUEST_P_H

#include "ssmrequest_p.h"
#include "listresourcedatasyncrequest.h"

namespace QtAws {
namespace Ssm {

class ListResourceDataSyncRequest;

class ListResourceDataSyncRequestPrivate : public SsmRequestPrivate {

public:
    ListResourceDataSyncRequestPrivate(const SsmRequest::Action action,
                                   ListResourceDataSyncRequest * const q);
    ListResourceDataSyncRequestPrivate(const ListResourceDataSyncRequestPrivate &other,
                                   ListResourceDataSyncRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListResourceDataSyncRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
