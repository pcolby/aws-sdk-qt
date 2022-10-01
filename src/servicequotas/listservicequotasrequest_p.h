// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICEQUOTASREQUEST_P_H
#define QTAWS_LISTSERVICEQUOTASREQUEST_P_H

#include "servicequotasrequest_p.h"
#include "listservicequotasrequest.h"

namespace QtAws {
namespace ServiceQuotas {

class ListServiceQuotasRequest;

class ListServiceQuotasRequestPrivate : public ServiceQuotasRequestPrivate {

public:
    ListServiceQuotasRequestPrivate(const ServiceQuotasRequest::Action action,
                                   ListServiceQuotasRequest * const q);
    ListServiceQuotasRequestPrivate(const ListServiceQuotasRequestPrivate &other,
                                   ListServiceQuotasRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListServiceQuotasRequest)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
