// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCLUSTERCREDENTIALSWITHIAMREQUEST_P_H
#define QTAWS_GETCLUSTERCREDENTIALSWITHIAMREQUEST_P_H

#include "redshiftrequest_p.h"
#include "getclustercredentialswithiamrequest.h"

namespace QtAws {
namespace Redshift {

class GetClusterCredentialsWithIAMRequest;

class GetClusterCredentialsWithIAMRequestPrivate : public RedshiftRequestPrivate {

public:
    GetClusterCredentialsWithIAMRequestPrivate(const RedshiftRequest::Action action,
                                   GetClusterCredentialsWithIAMRequest * const q);
    GetClusterCredentialsWithIAMRequestPrivate(const GetClusterCredentialsWithIAMRequestPrivate &other,
                                   GetClusterCredentialsWithIAMRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetClusterCredentialsWithIAMRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
