// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSAGELIMITREQUEST_P_H
#define QTAWS_CREATEUSAGELIMITREQUEST_P_H

#include "redshiftrequest_p.h"
#include "createusagelimitrequest.h"

namespace QtAws {
namespace Redshift {

class CreateUsageLimitRequest;

class CreateUsageLimitRequestPrivate : public RedshiftRequestPrivate {

public:
    CreateUsageLimitRequestPrivate(const RedshiftRequest::Action action,
                                   CreateUsageLimitRequest * const q);
    CreateUsageLimitRequestPrivate(const CreateUsageLimitRequestPrivate &other,
                                   CreateUsageLimitRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateUsageLimitRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
