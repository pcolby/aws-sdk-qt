// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTACTATTRIBUTESREQUEST_P_H
#define QTAWS_UPDATECONTACTATTRIBUTESREQUEST_P_H

#include "connectrequest_p.h"
#include "updatecontactattributesrequest.h"

namespace QtAws {
namespace Connect {

class UpdateContactAttributesRequest;

class UpdateContactAttributesRequestPrivate : public ConnectRequestPrivate {

public:
    UpdateContactAttributesRequestPrivate(const ConnectRequest::Action action,
                                   UpdateContactAttributesRequest * const q);
    UpdateContactAttributesRequestPrivate(const UpdateContactAttributesRequestPrivate &other,
                                   UpdateContactAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateContactAttributesRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
