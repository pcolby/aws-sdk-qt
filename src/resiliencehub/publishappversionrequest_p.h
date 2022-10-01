// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUBLISHAPPVERSIONREQUEST_P_H
#define QTAWS_PUBLISHAPPVERSIONREQUEST_P_H

#include "resiliencehubrequest_p.h"
#include "publishappversionrequest.h"

namespace QtAws {
namespace ResilienceHub {

class PublishAppVersionRequest;

class PublishAppVersionRequestPrivate : public ResilienceHubRequestPrivate {

public:
    PublishAppVersionRequestPrivate(const ResilienceHubRequest::Action action,
                                   PublishAppVersionRequest * const q);
    PublishAppVersionRequestPrivate(const PublishAppVersionRequestPrivate &other,
                                   PublishAppVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(PublishAppVersionRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
