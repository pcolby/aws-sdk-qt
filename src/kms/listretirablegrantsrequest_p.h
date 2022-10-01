// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRETIRABLEGRANTSREQUEST_P_H
#define QTAWS_LISTRETIRABLEGRANTSREQUEST_P_H

#include "kmsrequest_p.h"
#include "listretirablegrantsrequest.h"

namespace QtAws {
namespace Kms {

class ListRetirableGrantsRequest;

class ListRetirableGrantsRequestPrivate : public KmsRequestPrivate {

public:
    ListRetirableGrantsRequestPrivate(const KmsRequest::Action action,
                                   ListRetirableGrantsRequest * const q);
    ListRetirableGrantsRequestPrivate(const ListRetirableGrantsRequestPrivate &other,
                                   ListRetirableGrantsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRetirableGrantsRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
