// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOMAINENTRYREQUEST_P_H
#define QTAWS_UPDATEDOMAINENTRYREQUEST_P_H

#include "lightsailrequest_p.h"
#include "updatedomainentryrequest.h"

namespace QtAws {
namespace Lightsail {

class UpdateDomainEntryRequest;

class UpdateDomainEntryRequestPrivate : public LightsailRequestPrivate {

public:
    UpdateDomainEntryRequestPrivate(const LightsailRequest::Action action,
                                   UpdateDomainEntryRequest * const q);
    UpdateDomainEntryRequestPrivate(const UpdateDomainEntryRequestPrivate &other,
                                   UpdateDomainEntryRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDomainEntryRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
