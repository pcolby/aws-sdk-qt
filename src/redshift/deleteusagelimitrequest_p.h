// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSAGELIMITREQUEST_P_H
#define QTAWS_DELETEUSAGELIMITREQUEST_P_H

#include "redshiftrequest_p.h"
#include "deleteusagelimitrequest.h"

namespace QtAws {
namespace Redshift {

class DeleteUsageLimitRequest;

class DeleteUsageLimitRequestPrivate : public RedshiftRequestPrivate {

public:
    DeleteUsageLimitRequestPrivate(const RedshiftRequest::Action action,
                                   DeleteUsageLimitRequest * const q);
    DeleteUsageLimitRequestPrivate(const DeleteUsageLimitRequestPrivate &other,
                                   DeleteUsageLimitRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteUsageLimitRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
