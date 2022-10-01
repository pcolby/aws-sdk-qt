// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETKEYGROUPCONFIGREQUEST_P_H
#define QTAWS_GETKEYGROUPCONFIGREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "getkeygroupconfigrequest.h"

namespace QtAws {
namespace CloudFront {

class GetKeyGroupConfigRequest;

class GetKeyGroupConfigRequestPrivate : public CloudFrontRequestPrivate {

public:
    GetKeyGroupConfigRequestPrivate(const CloudFrontRequest::Action action,
                                   GetKeyGroupConfigRequest * const q);
    GetKeyGroupConfigRequestPrivate(const GetKeyGroupConfigRequestPrivate &other,
                                   GetKeyGroupConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetKeyGroupConfigRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
