// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFARGATEPROFILEREQUEST_P_H
#define QTAWS_DESCRIBEFARGATEPROFILEREQUEST_P_H

#include "eksrequest_p.h"
#include "describefargateprofilerequest.h"

namespace QtAws {
namespace Eks {

class DescribeFargateProfileRequest;

class DescribeFargateProfileRequestPrivate : public EksRequestPrivate {

public:
    DescribeFargateProfileRequestPrivate(const EksRequest::Action action,
                                   DescribeFargateProfileRequest * const q);
    DescribeFargateProfileRequestPrivate(const DescribeFargateProfileRequestPrivate &other,
                                   DescribeFargateProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFargateProfileRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
