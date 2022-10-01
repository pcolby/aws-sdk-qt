// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVICEQUOTAINCREASEREQUESTFROMTEMPLATERESPONSE_H
#define QTAWS_DELETESERVICEQUOTAINCREASEREQUESTFROMTEMPLATERESPONSE_H

#include "servicequotasresponse.h"
#include "deleteservicequotaincreaserequestfromtemplaterequest.h"

namespace QtAws {
namespace ServiceQuotas {

class DeleteServiceQuotaIncreaseRequestFromTemplateResponsePrivate;

class QTAWSSERVICEQUOTAS_EXPORT DeleteServiceQuotaIncreaseRequestFromTemplateResponse : public ServiceQuotasResponse {
    Q_OBJECT

public:
    DeleteServiceQuotaIncreaseRequestFromTemplateResponse(const DeleteServiceQuotaIncreaseRequestFromTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteServiceQuotaIncreaseRequestFromTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteServiceQuotaIncreaseRequestFromTemplateResponse)
    Q_DISABLE_COPY(DeleteServiceQuotaIncreaseRequestFromTemplateResponse)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
