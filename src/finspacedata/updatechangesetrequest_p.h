// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECHANGESETREQUEST_P_H
#define QTAWS_UPDATECHANGESETREQUEST_P_H

#include "finspacedatarequest_p.h"
#include "updatechangesetrequest.h"

namespace QtAws {
namespace FinspaceData {

class UpdateChangesetRequest;

class UpdateChangesetRequestPrivate : public FinspaceDataRequestPrivate {

public:
    UpdateChangesetRequestPrivate(const FinspaceDataRequest::Action action,
                                   UpdateChangesetRequest * const q);
    UpdateChangesetRequestPrivate(const UpdateChangesetRequestPrivate &other,
                                   UpdateChangesetRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateChangesetRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
