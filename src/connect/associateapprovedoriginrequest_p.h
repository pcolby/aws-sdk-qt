// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEAPPROVEDORIGINREQUEST_P_H
#define QTAWS_ASSOCIATEAPPROVEDORIGINREQUEST_P_H

#include "connectrequest_p.h"
#include "associateapprovedoriginrequest.h"

namespace QtAws {
namespace Connect {

class AssociateApprovedOriginRequest;

class AssociateApprovedOriginRequestPrivate : public ConnectRequestPrivate {

public:
    AssociateApprovedOriginRequestPrivate(const ConnectRequest::Action action,
                                   AssociateApprovedOriginRequest * const q);
    AssociateApprovedOriginRequestPrivate(const AssociateApprovedOriginRequestPrivate &other,
                                   AssociateApprovedOriginRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateApprovedOriginRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
