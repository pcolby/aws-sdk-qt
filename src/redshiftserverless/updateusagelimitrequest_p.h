// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSAGELIMITREQUEST_P_H
#define QTAWS_UPDATEUSAGELIMITREQUEST_P_H

#include "redshiftserverlessrequest_p.h"
#include "updateusagelimitrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class UpdateUsageLimitRequest;

class UpdateUsageLimitRequestPrivate : public RedshiftServerlessRequestPrivate {

public:
    UpdateUsageLimitRequestPrivate(const RedshiftServerlessRequest::Action action,
                                   UpdateUsageLimitRequest * const q);
    UpdateUsageLimitRequestPrivate(const UpdateUsageLimitRequestPrivate &other,
                                   UpdateUsageLimitRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateUsageLimitRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
