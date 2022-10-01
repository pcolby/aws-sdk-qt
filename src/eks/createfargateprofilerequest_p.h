// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFARGATEPROFILEREQUEST_P_H
#define QTAWS_CREATEFARGATEPROFILEREQUEST_P_H

#include "eksrequest_p.h"
#include "createfargateprofilerequest.h"

namespace QtAws {
namespace Eks {

class CreateFargateProfileRequest;

class CreateFargateProfileRequestPrivate : public EksRequestPrivate {

public:
    CreateFargateProfileRequestPrivate(const EksRequest::Action action,
                                   CreateFargateProfileRequest * const q);
    CreateFargateProfileRequestPrivate(const CreateFargateProfileRequestPrivate &other,
                                   CreateFargateProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateFargateProfileRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
