// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSERVICEQUOTAINCREASEREQUESTINTOTEMPLATERESPONSE_H
#define QTAWS_PUTSERVICEQUOTAINCREASEREQUESTINTOTEMPLATERESPONSE_H

#include "servicequotasresponse.h"
#include "putservicequotaincreaserequestintotemplaterequest.h"

namespace QtAws {
namespace ServiceQuotas {

class PutServiceQuotaIncreaseRequestIntoTemplateResponsePrivate;

class QTAWSSERVICEQUOTAS_EXPORT PutServiceQuotaIncreaseRequestIntoTemplateResponse : public ServiceQuotasResponse {
    Q_OBJECT

public:
    PutServiceQuotaIncreaseRequestIntoTemplateResponse(const PutServiceQuotaIncreaseRequestIntoTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutServiceQuotaIncreaseRequestIntoTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutServiceQuotaIncreaseRequestIntoTemplateResponse)
    Q_DISABLE_COPY(PutServiceQuotaIncreaseRequestIntoTemplateResponse)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
