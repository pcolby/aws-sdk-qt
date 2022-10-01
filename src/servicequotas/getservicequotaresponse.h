// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICEQUOTARESPONSE_H
#define QTAWS_GETSERVICEQUOTARESPONSE_H

#include "servicequotasresponse.h"
#include "getservicequotarequest.h"

namespace QtAws {
namespace ServiceQuotas {

class GetServiceQuotaResponsePrivate;

class QTAWSSERVICEQUOTAS_EXPORT GetServiceQuotaResponse : public ServiceQuotasResponse {
    Q_OBJECT

public:
    GetServiceQuotaResponse(const GetServiceQuotaRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetServiceQuotaRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetServiceQuotaResponse)
    Q_DISABLE_COPY(GetServiceQuotaResponse)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
