// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENDPOINTACCESSREQUEST_P_H
#define QTAWS_UPDATEENDPOINTACCESSREQUEST_P_H

#include "redshiftserverlessrequest_p.h"
#include "updateendpointaccessrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class UpdateEndpointAccessRequest;

class UpdateEndpointAccessRequestPrivate : public RedshiftServerlessRequestPrivate {

public:
    UpdateEndpointAccessRequestPrivate(const RedshiftServerlessRequest::Action action,
                                   UpdateEndpointAccessRequest * const q);
    UpdateEndpointAccessRequestPrivate(const UpdateEndpointAccessRequestPrivate &other,
                                   UpdateEndpointAccessRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateEndpointAccessRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
