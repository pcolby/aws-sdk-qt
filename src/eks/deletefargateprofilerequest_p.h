// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFARGATEPROFILEREQUEST_P_H
#define QTAWS_DELETEFARGATEPROFILEREQUEST_P_H

#include "eksrequest_p.h"
#include "deletefargateprofilerequest.h"

namespace QtAws {
namespace Eks {

class DeleteFargateProfileRequest;

class DeleteFargateProfileRequestPrivate : public EksRequestPrivate {

public:
    DeleteFargateProfileRequestPrivate(const EksRequest::Action action,
                                   DeleteFargateProfileRequest * const q);
    DeleteFargateProfileRequestPrivate(const DeleteFargateProfileRequestPrivate &other,
                                   DeleteFargateProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFargateProfileRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
