// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREQUESTEDSERVICEQUOTACHANGEREQUEST_P_H
#define QTAWS_GETREQUESTEDSERVICEQUOTACHANGEREQUEST_P_H

#include "servicequotasrequest_p.h"
#include "getrequestedservicequotachangerequest.h"

namespace QtAws {
namespace ServiceQuotas {

class GetRequestedServiceQuotaChangeRequest;

class GetRequestedServiceQuotaChangeRequestPrivate : public ServiceQuotasRequestPrivate {

public:
    GetRequestedServiceQuotaChangeRequestPrivate(const ServiceQuotasRequest::Action action,
                                   GetRequestedServiceQuotaChangeRequest * const q);
    GetRequestedServiceQuotaChangeRequestPrivate(const GetRequestedServiceQuotaChangeRequestPrivate &other,
                                   GetRequestedServiceQuotaChangeRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRequestedServiceQuotaChangeRequest)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
