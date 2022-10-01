// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVICEQUOTAINCREASEREQUESTFROMTEMPLATEREQUEST_H
#define QTAWS_DELETESERVICEQUOTAINCREASEREQUESTFROMTEMPLATEREQUEST_H

#include "servicequotasrequest.h"

namespace QtAws {
namespace ServiceQuotas {

class DeleteServiceQuotaIncreaseRequestFromTemplateRequestPrivate;

class QTAWSSERVICEQUOTAS_EXPORT DeleteServiceQuotaIncreaseRequestFromTemplateRequest : public ServiceQuotasRequest {

public:
    DeleteServiceQuotaIncreaseRequestFromTemplateRequest(const DeleteServiceQuotaIncreaseRequestFromTemplateRequest &other);
    DeleteServiceQuotaIncreaseRequestFromTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteServiceQuotaIncreaseRequestFromTemplateRequest)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
