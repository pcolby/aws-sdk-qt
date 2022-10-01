// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCEDATASYNCREQUEST_P_H
#define QTAWS_DELETERESOURCEDATASYNCREQUEST_P_H

#include "ssmrequest_p.h"
#include "deleteresourcedatasyncrequest.h"

namespace QtAws {
namespace Ssm {

class DeleteResourceDataSyncRequest;

class DeleteResourceDataSyncRequestPrivate : public SsmRequestPrivate {

public:
    DeleteResourceDataSyncRequestPrivate(const SsmRequest::Action action,
                                   DeleteResourceDataSyncRequest * const q);
    DeleteResourceDataSyncRequestPrivate(const DeleteResourceDataSyncRequestPrivate &other,
                                   DeleteResourceDataSyncRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteResourceDataSyncRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
