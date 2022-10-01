// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCLUSTERCREDENTIALSREQUEST_P_H
#define QTAWS_GETCLUSTERCREDENTIALSREQUEST_P_H

#include "redshiftrequest_p.h"
#include "getclustercredentialsrequest.h"

namespace QtAws {
namespace Redshift {

class GetClusterCredentialsRequest;

class GetClusterCredentialsRequestPrivate : public RedshiftRequestPrivate {

public:
    GetClusterCredentialsRequestPrivate(const RedshiftRequest::Action action,
                                   GetClusterCredentialsRequest * const q);
    GetClusterCredentialsRequestPrivate(const GetClusterCredentialsRequestPrivate &other,
                                   GetClusterCredentialsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetClusterCredentialsRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
