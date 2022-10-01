// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAUTHENTICATIONPROFILEREQUEST_P_H
#define QTAWS_CREATEAUTHENTICATIONPROFILEREQUEST_P_H

#include "redshiftrequest_p.h"
#include "createauthenticationprofilerequest.h"

namespace QtAws {
namespace Redshift {

class CreateAuthenticationProfileRequest;

class CreateAuthenticationProfileRequestPrivate : public RedshiftRequestPrivate {

public:
    CreateAuthenticationProfileRequestPrivate(const RedshiftRequest::Action action,
                                   CreateAuthenticationProfileRequest * const q);
    CreateAuthenticationProfileRequestPrivate(const CreateAuthenticationProfileRequestPrivate &other,
                                   CreateAuthenticationProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAuthenticationProfileRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
