// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSNAPSHOTSREQUEST_P_H
#define QTAWS_GETSNAPSHOTSREQUEST_P_H

#include "kendrarequest_p.h"
#include "getsnapshotsrequest.h"

namespace QtAws {
namespace Kendra {

class GetSnapshotsRequest;

class GetSnapshotsRequestPrivate : public KendraRequestPrivate {

public:
    GetSnapshotsRequestPrivate(const KendraRequest::Action action,
                                   GetSnapshotsRequest * const q);
    GetSnapshotsRequestPrivate(const GetSnapshotsRequestPrivate &other,
                                   GetSnapshotsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSnapshotsRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
