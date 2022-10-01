// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICEQUOTAINCREASEREQUESTSINTEMPLATERESPONSE_H
#define QTAWS_LISTSERVICEQUOTAINCREASEREQUESTSINTEMPLATERESPONSE_H

#include "servicequotasresponse.h"
#include "listservicequotaincreaserequestsintemplaterequest.h"

namespace QtAws {
namespace ServiceQuotas {

class ListServiceQuotaIncreaseRequestsInTemplateResponsePrivate;

class QTAWSSERVICEQUOTAS_EXPORT ListServiceQuotaIncreaseRequestsInTemplateResponse : public ServiceQuotasResponse {
    Q_OBJECT

public:
    ListServiceQuotaIncreaseRequestsInTemplateResponse(const ListServiceQuotaIncreaseRequestsInTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListServiceQuotaIncreaseRequestsInTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListServiceQuotaIncreaseRequestsInTemplateResponse)
    Q_DISABLE_COPY(ListServiceQuotaIncreaseRequestsInTemplateResponse)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
