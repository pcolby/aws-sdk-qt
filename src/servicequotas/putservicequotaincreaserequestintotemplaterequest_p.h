/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_PUTSERVICEQUOTAINCREASEREQUESTINTOTEMPLATEREQUEST_P_H
#define QTAWS_PUTSERVICEQUOTAINCREASEREQUESTINTOTEMPLATEREQUEST_P_H

#include "servicequotasrequest_p.h"
#include "putservicequotaincreaserequestintotemplaterequest.h"

namespace QtAws {
namespace ServiceQuotas {

class PutServiceQuotaIncreaseRequestIntoTemplateRequest;

class QTAWS_EXPORT PutServiceQuotaIncreaseRequestIntoTemplateRequestPrivate : public ServiceQuotasRequestPrivate {

public:
    PutServiceQuotaIncreaseRequestIntoTemplateRequestPrivate(const ServiceQuotasRequest::Action action,
                                   PutServiceQuotaIncreaseRequestIntoTemplateRequest * const q);
    PutServiceQuotaIncreaseRequestIntoTemplateRequestPrivate(const PutServiceQuotaIncreaseRequestIntoTemplateRequestPrivate &other,
                                   PutServiceQuotaIncreaseRequestIntoTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutServiceQuotaIncreaseRequestIntoTemplateRequest)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
