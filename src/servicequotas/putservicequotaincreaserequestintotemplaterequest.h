// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSERVICEQUOTAINCREASEREQUESTINTOTEMPLATEREQUEST_H
#define QTAWS_PUTSERVICEQUOTAINCREASEREQUESTINTOTEMPLATEREQUEST_H

#include "servicequotasrequest.h"

namespace QtAws {
namespace ServiceQuotas {

class PutServiceQuotaIncreaseRequestIntoTemplateRequestPrivate;

class QTAWSSERVICEQUOTAS_EXPORT PutServiceQuotaIncreaseRequestIntoTemplateRequest : public ServiceQuotasRequest {

public:
    PutServiceQuotaIncreaseRequestIntoTemplateRequest(const PutServiceQuotaIncreaseRequestIntoTemplateRequest &other);
    PutServiceQuotaIncreaseRequestIntoTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutServiceQuotaIncreaseRequestIntoTemplateRequest)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
