// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLELOGGINGREQUEST_P_H
#define QTAWS_ENABLELOGGINGREQUEST_P_H

#include "redshiftrequest_p.h"
#include "enableloggingrequest.h"

namespace QtAws {
namespace Redshift {

class EnableLoggingRequest;

class EnableLoggingRequestPrivate : public RedshiftRequestPrivate {

public:
    EnableLoggingRequestPrivate(const RedshiftRequest::Action action,
                                   EnableLoggingRequest * const q);
    EnableLoggingRequestPrivate(const EnableLoggingRequestPrivate &other,
                                   EnableLoggingRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableLoggingRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
