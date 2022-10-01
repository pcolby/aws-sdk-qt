// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENDPOINTACCESSREQUEST_P_H
#define QTAWS_LISTENDPOINTACCESSREQUEST_P_H

#include "redshiftserverlessrequest_p.h"
#include "listendpointaccessrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class ListEndpointAccessRequest;

class ListEndpointAccessRequestPrivate : public RedshiftServerlessRequestPrivate {

public:
    ListEndpointAccessRequestPrivate(const RedshiftServerlessRequest::Action action,
                                   ListEndpointAccessRequest * const q);
    ListEndpointAccessRequestPrivate(const ListEndpointAccessRequestPrivate &other,
                                   ListEndpointAccessRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEndpointAccessRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
