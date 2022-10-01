// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEMAILIDENTITIESREQUEST_P_H
#define QTAWS_LISTEMAILIDENTITIESREQUEST_P_H

#include "sesv2request_p.h"
#include "listemailidentitiesrequest.h"

namespace QtAws {
namespace SESv2 {

class ListEmailIdentitiesRequest;

class ListEmailIdentitiesRequestPrivate : public SESv2RequestPrivate {

public:
    ListEmailIdentitiesRequestPrivate(const SESv2Request::Action action,
                                   ListEmailIdentitiesRequest * const q);
    ListEmailIdentitiesRequestPrivate(const ListEmailIdentitiesRequestPrivate &other,
                                   ListEmailIdentitiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEmailIdentitiesRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
