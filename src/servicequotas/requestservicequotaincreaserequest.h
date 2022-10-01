// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REQUESTSERVICEQUOTAINCREASEREQUEST_H
#define QTAWS_REQUESTSERVICEQUOTAINCREASEREQUEST_H

#include "servicequotasrequest.h"

namespace QtAws {
namespace ServiceQuotas {

class RequestServiceQuotaIncreaseRequestPrivate;

class QTAWSSERVICEQUOTAS_EXPORT RequestServiceQuotaIncreaseRequest : public ServiceQuotasRequest {

public:
    RequestServiceQuotaIncreaseRequest(const RequestServiceQuotaIncreaseRequest &other);
    RequestServiceQuotaIncreaseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RequestServiceQuotaIncreaseRequest)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
