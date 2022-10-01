// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENDPOINTACCESSREQUEST_P_H
#define QTAWS_DELETEENDPOINTACCESSREQUEST_P_H

#include "redshiftrequest_p.h"
#include "deleteendpointaccessrequest.h"

namespace QtAws {
namespace Redshift {

class DeleteEndpointAccessRequest;

class DeleteEndpointAccessRequestPrivate : public RedshiftRequestPrivate {

public:
    DeleteEndpointAccessRequestPrivate(const RedshiftRequest::Action action,
                                   DeleteEndpointAccessRequest * const q);
    DeleteEndpointAccessRequestPrivate(const DeleteEndpointAccessRequestPrivate &other,
                                   DeleteEndpointAccessRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEndpointAccessRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
