// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTHORIZEDATASHAREREQUEST_P_H
#define QTAWS_AUTHORIZEDATASHAREREQUEST_P_H

#include "redshiftrequest_p.h"
#include "authorizedatasharerequest.h"

namespace QtAws {
namespace Redshift {

class AuthorizeDataShareRequest;

class AuthorizeDataShareRequestPrivate : public RedshiftRequestPrivate {

public:
    AuthorizeDataShareRequestPrivate(const RedshiftRequest::Action action,
                                   AuthorizeDataShareRequest * const q);
    AuthorizeDataShareRequestPrivate(const AuthorizeDataShareRequestPrivate &other,
                                   AuthorizeDataShareRequest * const q);

private:
    Q_DECLARE_PUBLIC(AuthorizeDataShareRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
