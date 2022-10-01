// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKESNAPSHOTACCESSREQUEST_P_H
#define QTAWS_REVOKESNAPSHOTACCESSREQUEST_P_H

#include "redshiftrequest_p.h"
#include "revokesnapshotaccessrequest.h"

namespace QtAws {
namespace Redshift {

class RevokeSnapshotAccessRequest;

class RevokeSnapshotAccessRequestPrivate : public RedshiftRequestPrivate {

public:
    RevokeSnapshotAccessRequestPrivate(const RedshiftRequest::Action action,
                                   RevokeSnapshotAccessRequest * const q);
    RevokeSnapshotAccessRequestPrivate(const RevokeSnapshotAccessRequestPrivate &other,
                                   RevokeSnapshotAccessRequest * const q);

private:
    Q_DECLARE_PUBLIC(RevokeSnapshotAccessRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
