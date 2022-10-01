// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSOCIATIONFORSERVICEQUOTATEMPLATEREQUEST_H
#define QTAWS_GETASSOCIATIONFORSERVICEQUOTATEMPLATEREQUEST_H

#include "servicequotasrequest.h"

namespace QtAws {
namespace ServiceQuotas {

class GetAssociationForServiceQuotaTemplateRequestPrivate;

class QTAWSSERVICEQUOTAS_EXPORT GetAssociationForServiceQuotaTemplateRequest : public ServiceQuotasRequest {

public:
    GetAssociationForServiceQuotaTemplateRequest(const GetAssociationForServiceQuotaTemplateRequest &other);
    GetAssociationForServiceQuotaTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAssociationForServiceQuotaTemplateRequest)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
