// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOURCEDATASYNCREQUEST_P_H
#define QTAWS_CREATERESOURCEDATASYNCREQUEST_P_H

#include "ssmrequest_p.h"
#include "createresourcedatasyncrequest.h"

namespace QtAws {
namespace Ssm {

class CreateResourceDataSyncRequest;

class CreateResourceDataSyncRequestPrivate : public SsmRequestPrivate {

public:
    CreateResourceDataSyncRequestPrivate(const SsmRequest::Action action,
                                   CreateResourceDataSyncRequest * const q);
    CreateResourceDataSyncRequestPrivate(const CreateResourceDataSyncRequestPrivate &other,
                                   CreateResourceDataSyncRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateResourceDataSyncRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
