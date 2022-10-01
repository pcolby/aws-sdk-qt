// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSOCIATIONFORSERVICEQUOTATEMPLATERESPONSE_H
#define QTAWS_GETASSOCIATIONFORSERVICEQUOTATEMPLATERESPONSE_H

#include "servicequotasresponse.h"
#include "getassociationforservicequotatemplaterequest.h"

namespace QtAws {
namespace ServiceQuotas {

class GetAssociationForServiceQuotaTemplateResponsePrivate;

class QTAWSSERVICEQUOTAS_EXPORT GetAssociationForServiceQuotaTemplateResponse : public ServiceQuotasResponse {
    Q_OBJECT

public:
    GetAssociationForServiceQuotaTemplateResponse(const GetAssociationForServiceQuotaTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAssociationForServiceQuotaTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAssociationForServiceQuotaTemplateResponse)
    Q_DISABLE_COPY(GetAssociationForServiceQuotaTemplateResponse)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
