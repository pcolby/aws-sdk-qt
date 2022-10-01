// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REQUESTSERVICEQUOTAINCREASERESPONSE_H
#define QTAWS_REQUESTSERVICEQUOTAINCREASERESPONSE_H

#include "servicequotasresponse.h"
#include "requestservicequotaincreaserequest.h"

namespace QtAws {
namespace ServiceQuotas {

class RequestServiceQuotaIncreaseResponsePrivate;

class QTAWSSERVICEQUOTAS_EXPORT RequestServiceQuotaIncreaseResponse : public ServiceQuotasResponse {
    Q_OBJECT

public:
    RequestServiceQuotaIncreaseResponse(const RequestServiceQuotaIncreaseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RequestServiceQuotaIncreaseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RequestServiceQuotaIncreaseResponse)
    Q_DISABLE_COPY(RequestServiceQuotaIncreaseResponse)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
