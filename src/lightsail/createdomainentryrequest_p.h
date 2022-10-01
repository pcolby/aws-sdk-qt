// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDOMAINENTRYREQUEST_P_H
#define QTAWS_CREATEDOMAINENTRYREQUEST_P_H

#include "lightsailrequest_p.h"
#include "createdomainentryrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateDomainEntryRequest;

class CreateDomainEntryRequestPrivate : public LightsailRequestPrivate {

public:
    CreateDomainEntryRequestPrivate(const LightsailRequest::Action action,
                                   CreateDomainEntryRequest * const q);
    CreateDomainEntryRequestPrivate(const CreateDomainEntryRequestPrivate &other,
                                   CreateDomainEntryRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDomainEntryRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
