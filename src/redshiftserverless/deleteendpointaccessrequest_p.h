// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENDPOINTACCESSREQUEST_P_H
#define QTAWS_DELETEENDPOINTACCESSREQUEST_P_H

#include "redshiftserverlessrequest_p.h"
#include "deleteendpointaccessrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class DeleteEndpointAccessRequest;

class DeleteEndpointAccessRequestPrivate : public RedshiftServerlessRequestPrivate {

public:
    DeleteEndpointAccessRequestPrivate(const RedshiftServerlessRequest::Action action,
                                   DeleteEndpointAccessRequest * const q);
    DeleteEndpointAccessRequestPrivate(const DeleteEndpointAccessRequestPrivate &other,
                                   DeleteEndpointAccessRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEndpointAccessRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
