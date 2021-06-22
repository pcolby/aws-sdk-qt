/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_SETUSERSETTINGSREQUEST_P_H
#define QTAWS_SETUSERSETTINGSREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "setusersettingsrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class SetUserSettingsRequest;

class SetUserSettingsRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    SetUserSettingsRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   SetUserSettingsRequest * const q);
    SetUserSettingsRequestPrivate(const SetUserSettingsRequestPrivate &other,
                                   SetUserSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetUserSettingsRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
