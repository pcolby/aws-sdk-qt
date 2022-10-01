// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOURCEDATASYNCREQUEST_P_H
#define QTAWS_UPDATERESOURCEDATASYNCREQUEST_P_H

#include "ssmrequest_p.h"
#include "updateresourcedatasyncrequest.h"

namespace QtAws {
namespace Ssm {

class UpdateResourceDataSyncRequest;

class UpdateResourceDataSyncRequestPrivate : public SsmRequestPrivate {

public:
    UpdateResourceDataSyncRequestPrivate(const SsmRequest::Action action,
                                   UpdateResourceDataSyncRequest * const q);
    UpdateResourceDataSyncRequestPrivate(const UpdateResourceDataSyncRequestPrivate &other,
                                   UpdateResourceDataSyncRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateResourceDataSyncRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
