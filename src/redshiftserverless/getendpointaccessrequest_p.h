// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENDPOINTACCESSREQUEST_P_H
#define QTAWS_GETENDPOINTACCESSREQUEST_P_H

#include "redshiftserverlessrequest_p.h"
#include "getendpointaccessrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class GetEndpointAccessRequest;

class GetEndpointAccessRequestPrivate : public RedshiftServerlessRequestPrivate {

public:
    GetEndpointAccessRequestPrivate(const RedshiftServerlessRequest::Action action,
                                   GetEndpointAccessRequest * const q);
    GetEndpointAccessRequestPrivate(const GetEndpointAccessRequestPrivate &other,
                                   GetEndpointAccessRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEndpointAccessRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
