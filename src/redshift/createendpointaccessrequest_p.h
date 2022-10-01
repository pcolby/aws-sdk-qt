// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENDPOINTACCESSREQUEST_P_H
#define QTAWS_CREATEENDPOINTACCESSREQUEST_P_H

#include "redshiftrequest_p.h"
#include "createendpointaccessrequest.h"

namespace QtAws {
namespace Redshift {

class CreateEndpointAccessRequest;

class CreateEndpointAccessRequestPrivate : public RedshiftRequestPrivate {

public:
    CreateEndpointAccessRequestPrivate(const RedshiftRequest::Action action,
                                   CreateEndpointAccessRequest * const q);
    CreateEndpointAccessRequestPrivate(const CreateEndpointAccessRequestPrivate &other,
                                   CreateEndpointAccessRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateEndpointAccessRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
