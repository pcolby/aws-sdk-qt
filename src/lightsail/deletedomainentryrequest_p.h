// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOMAINENTRYREQUEST_P_H
#define QTAWS_DELETEDOMAINENTRYREQUEST_P_H

#include "lightsailrequest_p.h"
#include "deletedomainentryrequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteDomainEntryRequest;

class DeleteDomainEntryRequestPrivate : public LightsailRequestPrivate {

public:
    DeleteDomainEntryRequestPrivate(const LightsailRequest::Action action,
                                   DeleteDomainEntryRequest * const q);
    DeleteDomainEntryRequestPrivate(const DeleteDomainEntryRequestPrivate &other,
                                   DeleteDomainEntryRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDomainEntryRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
