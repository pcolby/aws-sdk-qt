// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTHORIZEENDPOINTACCESSREQUEST_P_H
#define QTAWS_AUTHORIZEENDPOINTACCESSREQUEST_P_H

#include "redshiftrequest_p.h"
#include "authorizeendpointaccessrequest.h"

namespace QtAws {
namespace Redshift {

class AuthorizeEndpointAccessRequest;

class AuthorizeEndpointAccessRequestPrivate : public RedshiftRequestPrivate {

public:
    AuthorizeEndpointAccessRequestPrivate(const RedshiftRequest::Action action,
                                   AuthorizeEndpointAccessRequest * const q);
    AuthorizeEndpointAccessRequestPrivate(const AuthorizeEndpointAccessRequestPrivate &other,
                                   AuthorizeEndpointAccessRequest * const q);

private:
    Q_DECLARE_PUBLIC(AuthorizeEndpointAccessRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
