// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMYUSERPROFILEREQUEST_P_H
#define QTAWS_UPDATEMYUSERPROFILEREQUEST_P_H

#include "opsworksrequest_p.h"
#include "updatemyuserprofilerequest.h"

namespace QtAws {
namespace OpsWorks {

class UpdateMyUserProfileRequest;

class UpdateMyUserProfileRequestPrivate : public OpsWorksRequestPrivate {

public:
    UpdateMyUserProfileRequestPrivate(const OpsWorksRequest::Action action,
                                   UpdateMyUserProfileRequest * const q);
    UpdateMyUserProfileRequestPrivate(const UpdateMyUserProfileRequestPrivate &other,
                                   UpdateMyUserProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateMyUserProfileRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
