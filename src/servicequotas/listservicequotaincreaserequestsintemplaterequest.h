// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICEQUOTAINCREASEREQUESTSINTEMPLATEREQUEST_H
#define QTAWS_LISTSERVICEQUOTAINCREASEREQUESTSINTEMPLATEREQUEST_H

#include "servicequotasrequest.h"

namespace QtAws {
namespace ServiceQuotas {

class ListServiceQuotaIncreaseRequestsInTemplateRequestPrivate;

class QTAWSSERVICEQUOTAS_EXPORT ListServiceQuotaIncreaseRequestsInTemplateRequest : public ServiceQuotasRequest {

public:
    ListServiceQuotaIncreaseRequestsInTemplateRequest(const ListServiceQuotaIncreaseRequestsInTemplateRequest &other);
    ListServiceQuotaIncreaseRequestsInTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListServiceQuotaIncreaseRequestsInTemplateRequest)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
