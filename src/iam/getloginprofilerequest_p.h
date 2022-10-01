// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOGINPROFILEREQUEST_P_H
#define QTAWS_GETLOGINPROFILEREQUEST_P_H

#include "iamrequest_p.h"
#include "getloginprofilerequest.h"

namespace QtAws {
namespace Iam {

class GetLoginProfileRequest;

class GetLoginProfileRequestPrivate : public IamRequestPrivate {

public:
    GetLoginProfileRequestPrivate(const IamRequest::Action action,
                                   GetLoginProfileRequest * const q);
    GetLoginProfileRequestPrivate(const GetLoginProfileRequestPrivate &other,
                                   GetLoginProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLoginProfileRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
