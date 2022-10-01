// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLELOGGINGREQUEST_P_H
#define QTAWS_DISABLELOGGINGREQUEST_P_H

#include "redshiftrequest_p.h"
#include "disableloggingrequest.h"

namespace QtAws {
namespace Redshift {

class DisableLoggingRequest;

class DisableLoggingRequestPrivate : public RedshiftRequestPrivate {

public:
    DisableLoggingRequestPrivate(const RedshiftRequest::Action action,
                                   DisableLoggingRequest * const q);
    DisableLoggingRequestPrivate(const DisableLoggingRequestPrivate &other,
                                   DisableLoggingRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableLoggingRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
