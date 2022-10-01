// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENDPOINTACCESSREQUEST_P_H
#define QTAWS_CREATEENDPOINTACCESSREQUEST_P_H

#include "redshiftserverlessrequest_p.h"
#include "createendpointaccessrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class CreateEndpointAccessRequest;

class CreateEndpointAccessRequestPrivate : public RedshiftServerlessRequestPrivate {

public:
    CreateEndpointAccessRequestPrivate(const RedshiftServerlessRequest::Action action,
                                   CreateEndpointAccessRequest * const q);
    CreateEndpointAccessRequestPrivate(const CreateEndpointAccessRequestPrivate &other,
                                   CreateEndpointAccessRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateEndpointAccessRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
