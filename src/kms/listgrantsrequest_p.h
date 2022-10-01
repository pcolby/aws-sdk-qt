// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGRANTSREQUEST_P_H
#define QTAWS_LISTGRANTSREQUEST_P_H

#include "kmsrequest_p.h"
#include "listgrantsrequest.h"

namespace QtAws {
namespace Kms {

class ListGrantsRequest;

class ListGrantsRequestPrivate : public KmsRequestPrivate {

public:
    ListGrantsRequestPrivate(const KmsRequest::Action action,
                                   ListGrantsRequest * const q);
    ListGrantsRequestPrivate(const ListGrantsRequestPrivate &other,
                                   ListGrantsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListGrantsRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
