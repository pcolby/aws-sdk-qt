// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICEQUOTAINCREASEREQUESTFROMTEMPLATERESPONSE_H
#define QTAWS_GETSERVICEQUOTAINCREASEREQUESTFROMTEMPLATERESPONSE_H

#include "servicequotasresponse.h"
#include "getservicequotaincreaserequestfromtemplaterequest.h"

namespace QtAws {
namespace ServiceQuotas {

class GetServiceQuotaIncreaseRequestFromTemplateResponsePrivate;

class QTAWSSERVICEQUOTAS_EXPORT GetServiceQuotaIncreaseRequestFromTemplateResponse : public ServiceQuotasResponse {
    Q_OBJECT

public:
    GetServiceQuotaIncreaseRequestFromTemplateResponse(const GetServiceQuotaIncreaseRequestFromTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetServiceQuotaIncreaseRequestFromTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetServiceQuotaIncreaseRequestFromTemplateResponse)
    Q_DISABLE_COPY(GetServiceQuotaIncreaseRequestFromTemplateResponse)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
