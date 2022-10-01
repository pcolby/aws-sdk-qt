// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYUSAGELIMITREQUEST_P_H
#define QTAWS_MODIFYUSAGELIMITREQUEST_P_H

#include "redshiftrequest_p.h"
#include "modifyusagelimitrequest.h"

namespace QtAws {
namespace Redshift {

class ModifyUsageLimitRequest;

class ModifyUsageLimitRequestPrivate : public RedshiftRequestPrivate {

public:
    ModifyUsageLimitRequestPrivate(const RedshiftRequest::Action action,
                                   ModifyUsageLimitRequest * const q);
    ModifyUsageLimitRequestPrivate(const ModifyUsageLimitRequestPrivate &other,
                                   ModifyUsageLimitRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyUsageLimitRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
