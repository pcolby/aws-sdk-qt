// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKEENDPOINTACCESSREQUEST_P_H
#define QTAWS_REVOKEENDPOINTACCESSREQUEST_P_H

#include "redshiftrequest_p.h"
#include "revokeendpointaccessrequest.h"

namespace QtAws {
namespace Redshift {

class RevokeEndpointAccessRequest;

class RevokeEndpointAccessRequestPrivate : public RedshiftRequestPrivate {

public:
    RevokeEndpointAccessRequestPrivate(const RedshiftRequest::Action action,
                                   RevokeEndpointAccessRequest * const q);
    RevokeEndpointAccessRequestPrivate(const RevokeEndpointAccessRequestPrivate &other,
                                   RevokeEndpointAccessRequest * const q);

private:
    Q_DECLARE_PUBLIC(RevokeEndpointAccessRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
