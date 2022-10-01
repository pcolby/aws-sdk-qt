// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRESOURCEATTRIBUTESREQUEST_P_H
#define QTAWS_PUTRESOURCEATTRIBUTESREQUEST_P_H

#include "migrationhubrequest_p.h"
#include "putresourceattributesrequest.h"

namespace QtAws {
namespace MigrationHub {

class PutResourceAttributesRequest;

class PutResourceAttributesRequestPrivate : public MigrationHubRequestPrivate {

public:
    PutResourceAttributesRequestPrivate(const MigrationHubRequest::Action action,
                                   PutResourceAttributesRequest * const q);
    PutResourceAttributesRequestPrivate(const PutResourceAttributesRequestPrivate &other,
                                   PutResourceAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutResourceAttributesRequest)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
