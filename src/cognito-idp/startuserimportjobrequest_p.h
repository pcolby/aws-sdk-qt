/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_STARTUSERIMPORTJOBREQUEST_P_H
#define QTAWS_STARTUSERIMPORTJOBREQUEST_P_H

#include "cognitoidentityprovider_p.h"
#include "startuserimportjobrequest.h"

namespace AWS {

namespace CognitoIdentityProvider {

class StartUserImportJobRequest;

class QTAWS_EXPORT StartUserImportJobRequestPrivate : public CognitoIdentityProviderPrivate {

public:
    StartUserImportJobRequestPrivate(const CognitoIdentityProvider::Action action,
                                   StartUserImportJobRequest * const q);
    StartUserImportJobRequestPrivate(const StartUserImportJobRequestPrivate &other,
                                   StartUserImportJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartUserImportJobRequest)

};

} // namespace CognitoIdentityProvider
} // namespace AWS

#endif
