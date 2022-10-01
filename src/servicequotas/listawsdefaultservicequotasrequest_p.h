// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAWSDEFAULTSERVICEQUOTASREQUEST_P_H
#define QTAWS_LISTAWSDEFAULTSERVICEQUOTASREQUEST_P_H

#include "servicequotasrequest_p.h"
#include "listawsdefaultservicequotasrequest.h"

namespace QtAws {
namespace ServiceQuotas {

class ListAWSDefaultServiceQuotasRequest;

class ListAWSDefaultServiceQuotasRequestPrivate : public ServiceQuotasRequestPrivate {

public:
    ListAWSDefaultServiceQuotasRequestPrivate(const ServiceQuotasRequest::Action action,
                                   ListAWSDefaultServiceQuotasRequest * const q);
    ListAWSDefaultServiceQuotasRequestPrivate(const ListAWSDefaultServiceQuotasRequestPrivate &other,
                                   ListAWSDefaultServiceQuotasRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAWSDefaultServiceQuotasRequest)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
