// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTHORIZESNAPSHOTACCESSREQUEST_P_H
#define QTAWS_AUTHORIZESNAPSHOTACCESSREQUEST_P_H

#include "redshiftrequest_p.h"
#include "authorizesnapshotaccessrequest.h"

namespace QtAws {
namespace Redshift {

class AuthorizeSnapshotAccessRequest;

class AuthorizeSnapshotAccessRequestPrivate : public RedshiftRequestPrivate {

public:
    AuthorizeSnapshotAccessRequestPrivate(const RedshiftRequest::Action action,
                                   AuthorizeSnapshotAccessRequest * const q);
    AuthorizeSnapshotAccessRequestPrivate(const AuthorizeSnapshotAccessRequestPrivate &other,
                                   AuthorizeSnapshotAccessRequest * const q);

private:
    Q_DECLARE_PUBLIC(AuthorizeSnapshotAccessRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
