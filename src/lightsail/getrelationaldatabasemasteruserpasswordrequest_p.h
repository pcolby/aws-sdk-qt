// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRELATIONALDATABASEMASTERUSERPASSWORDREQUEST_P_H
#define QTAWS_GETRELATIONALDATABASEMASTERUSERPASSWORDREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getrelationaldatabasemasteruserpasswordrequest.h"

namespace QtAws {
namespace Lightsail {

class GetRelationalDatabaseMasterUserPasswordRequest;

class GetRelationalDatabaseMasterUserPasswordRequestPrivate : public LightsailRequestPrivate {

public:
    GetRelationalDatabaseMasterUserPasswordRequestPrivate(const LightsailRequest::Action action,
                                   GetRelationalDatabaseMasterUserPasswordRequest * const q);
    GetRelationalDatabaseMasterUserPasswordRequestPrivate(const GetRelationalDatabaseMasterUserPasswordRequestPrivate &other,
                                   GetRelationalDatabaseMasterUserPasswordRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRelationalDatabaseMasterUserPasswordRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
