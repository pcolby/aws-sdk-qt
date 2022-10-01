// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUBLISHREQUEST_P_H
#define QTAWS_PUBLISHREQUEST_P_H

#include "snsrequest_p.h"
#include "publishrequest.h"

namespace QtAws {
namespace Sns {

class PublishRequest;

class PublishRequestPrivate : public SnsRequestPrivate {

public:
    PublishRequestPrivate(const SnsRequest::Action action,
                                   PublishRequest * const q);
    PublishRequestPrivate(const PublishRequestPrivate &other,
                                   PublishRequest * const q);

private:
    Q_DECLARE_PUBLIC(PublishRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
