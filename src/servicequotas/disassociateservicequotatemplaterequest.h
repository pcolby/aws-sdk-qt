// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATESERVICEQUOTATEMPLATEREQUEST_H
#define QTAWS_DISASSOCIATESERVICEQUOTATEMPLATEREQUEST_H

#include "servicequotasrequest.h"

namespace QtAws {
namespace ServiceQuotas {

class DisassociateServiceQuotaTemplateRequestPrivate;

class QTAWSSERVICEQUOTAS_EXPORT DisassociateServiceQuotaTemplateRequest : public ServiceQuotasRequest {

public:
    DisassociateServiceQuotaTemplateRequest(const DisassociateServiceQuotaTemplateRequest &other);
    DisassociateServiceQuotaTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateServiceQuotaTemplateRequest)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
