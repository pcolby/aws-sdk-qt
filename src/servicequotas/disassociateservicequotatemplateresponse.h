// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATESERVICEQUOTATEMPLATERESPONSE_H
#define QTAWS_DISASSOCIATESERVICEQUOTATEMPLATERESPONSE_H

#include "servicequotasresponse.h"
#include "disassociateservicequotatemplaterequest.h"

namespace QtAws {
namespace ServiceQuotas {

class DisassociateServiceQuotaTemplateResponsePrivate;

class QTAWSSERVICEQUOTAS_EXPORT DisassociateServiceQuotaTemplateResponse : public ServiceQuotasResponse {
    Q_OBJECT

public:
    DisassociateServiceQuotaTemplateResponse(const DisassociateServiceQuotaTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateServiceQuotaTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateServiceQuotaTemplateResponse)
    Q_DISABLE_COPY(DisassociateServiceQuotaTemplateResponse)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
