// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSAGELIMITREQUEST_P_H
#define QTAWS_CREATEUSAGELIMITREQUEST_P_H

#include "redshiftserverlessrequest_p.h"
#include "createusagelimitrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class CreateUsageLimitRequest;

class CreateUsageLimitRequestPrivate : public RedshiftServerlessRequestPrivate {

public:
    CreateUsageLimitRequestPrivate(const RedshiftServerlessRequest::Action action,
                                   CreateUsageLimitRequest * const q);
    CreateUsageLimitRequestPrivate(const CreateUsageLimitRequestPrivate &other,
                                   CreateUsageLimitRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateUsageLimitRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
