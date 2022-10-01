// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERPROFILEREQUEST_P_H
#define QTAWS_UPDATEUSERPROFILEREQUEST_P_H

#include "opsworksrequest_p.h"
#include "updateuserprofilerequest.h"

namespace QtAws {
namespace OpsWorks {

class UpdateUserProfileRequest;

class UpdateUserProfileRequestPrivate : public OpsWorksRequestPrivate {

public:
    UpdateUserProfileRequestPrivate(const OpsWorksRequest::Action action,
                                   UpdateUserProfileRequest * const q);
    UpdateUserProfileRequestPrivate(const UpdateUserProfileRequestPrivate &other,
                                   UpdateUserProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateUserProfileRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
