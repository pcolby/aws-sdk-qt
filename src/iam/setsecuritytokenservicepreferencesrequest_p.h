// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETSECURITYTOKENSERVICEPREFERENCESREQUEST_P_H
#define QTAWS_SETSECURITYTOKENSERVICEPREFERENCESREQUEST_P_H

#include "iamrequest_p.h"
#include "setsecuritytokenservicepreferencesrequest.h"

namespace QtAws {
namespace Iam {

class SetSecurityTokenServicePreferencesRequest;

class SetSecurityTokenServicePreferencesRequestPrivate : public IamRequestPrivate {

public:
    SetSecurityTokenServicePreferencesRequestPrivate(const IamRequest::Action action,
                                   SetSecurityTokenServicePreferencesRequest * const q);
    SetSecurityTokenServicePreferencesRequestPrivate(const SetSecurityTokenServicePreferencesRequestPrivate &other,
                                   SetSecurityTokenServicePreferencesRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetSecurityTokenServicePreferencesRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
