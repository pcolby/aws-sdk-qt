// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHYPERVISORSREQUEST_P_H
#define QTAWS_LISTHYPERVISORSREQUEST_P_H

#include "backupgatewayrequest_p.h"
#include "listhypervisorsrequest.h"

namespace QtAws {
namespace BackupGateway {

class ListHypervisorsRequest;

class ListHypervisorsRequestPrivate : public BackupGatewayRequestPrivate {

public:
    ListHypervisorsRequestPrivate(const BackupGatewayRequest::Action action,
                                   ListHypervisorsRequest * const q);
    ListHypervisorsRequestPrivate(const ListHypervisorsRequestPrivate &other,
                                   ListHypervisorsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListHypervisorsRequest)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
