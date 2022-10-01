// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATESERVICEQUOTATEMPLATERESPONSE_H
#define QTAWS_ASSOCIATESERVICEQUOTATEMPLATERESPONSE_H

#include "servicequotasresponse.h"
#include "associateservicequotatemplaterequest.h"

namespace QtAws {
namespace ServiceQuotas {

class AssociateServiceQuotaTemplateResponsePrivate;

class QTAWSSERVICEQUOTAS_EXPORT AssociateServiceQuotaTemplateResponse : public ServiceQuotasResponse {
    Q_OBJECT

public:
    AssociateServiceQuotaTemplateResponse(const AssociateServiceQuotaTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateServiceQuotaTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateServiceQuotaTemplateResponse)
    Q_DISABLE_COPY(AssociateServiceQuotaTemplateResponse)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
