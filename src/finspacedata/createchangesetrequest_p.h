// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECHANGESETREQUEST_P_H
#define QTAWS_CREATECHANGESETREQUEST_P_H

#include "finspacedatarequest_p.h"
#include "createchangesetrequest.h"

namespace QtAws {
namespace FinspaceData {

class CreateChangesetRequest;

class CreateChangesetRequestPrivate : public FinspaceDataRequestPrivate {

public:
    CreateChangesetRequestPrivate(const FinspaceDataRequest::Action action,
                                   CreateChangesetRequest * const q);
    CreateChangesetRequestPrivate(const CreateChangesetRequestPrivate &other,
                                   CreateChangesetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateChangesetRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
