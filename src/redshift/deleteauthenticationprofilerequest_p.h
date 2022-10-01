// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAUTHENTICATIONPROFILEREQUEST_P_H
#define QTAWS_DELETEAUTHENTICATIONPROFILEREQUEST_P_H

#include "redshiftrequest_p.h"
#include "deleteauthenticationprofilerequest.h"

namespace QtAws {
namespace Redshift {

class DeleteAuthenticationProfileRequest;

class DeleteAuthenticationProfileRequestPrivate : public RedshiftRequestPrivate {

public:
    DeleteAuthenticationProfileRequestPrivate(const RedshiftRequest::Action action,
                                   DeleteAuthenticationProfileRequest * const q);
    DeleteAuthenticationProfileRequestPrivate(const DeleteAuthenticationProfileRequestPrivate &other,
                                   DeleteAuthenticationProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAuthenticationProfileRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
