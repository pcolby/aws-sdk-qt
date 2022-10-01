// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANGESETREQUEST_P_H
#define QTAWS_GETCHANGESETREQUEST_P_H

#include "finspacedatarequest_p.h"
#include "getchangesetrequest.h"

namespace QtAws {
namespace FinspaceData {

class GetChangesetRequest;

class GetChangesetRequestPrivate : public FinspaceDataRequestPrivate {

public:
    GetChangesetRequestPrivate(const FinspaceDataRequest::Action action,
                                   GetChangesetRequest * const q);
    GetChangesetRequestPrivate(const GetChangesetRequestPrivate &other,
                                   GetChangesetRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetChangesetRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
