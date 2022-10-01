// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELOGINPROFILEREQUEST_P_H
#define QTAWS_UPDATELOGINPROFILEREQUEST_P_H

#include "iamrequest_p.h"
#include "updateloginprofilerequest.h"

namespace QtAws {
namespace Iam {

class UpdateLoginProfileRequest;

class UpdateLoginProfileRequestPrivate : public IamRequestPrivate {

public:
    UpdateLoginProfileRequestPrivate(const IamRequest::Action action,
                                   UpdateLoginProfileRequest * const q);
    UpdateLoginProfileRequestPrivate(const UpdateLoginProfileRequestPrivate &other,
                                   UpdateLoginProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateLoginProfileRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
