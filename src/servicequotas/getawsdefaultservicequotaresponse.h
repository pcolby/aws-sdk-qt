// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAWSDEFAULTSERVICEQUOTARESPONSE_H
#define QTAWS_GETAWSDEFAULTSERVICEQUOTARESPONSE_H

#include "servicequotasresponse.h"
#include "getawsdefaultservicequotarequest.h"

namespace QtAws {
namespace ServiceQuotas {

class GetAWSDefaultServiceQuotaResponsePrivate;

class QTAWSSERVICEQUOTAS_EXPORT GetAWSDefaultServiceQuotaResponse : public ServiceQuotasResponse {
    Q_OBJECT

public:
    GetAWSDefaultServiceQuotaResponse(const GetAWSDefaultServiceQuotaRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAWSDefaultServiceQuotaRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAWSDefaultServiceQuotaResponse)
    Q_DISABLE_COPY(GetAWSDefaultServiceQuotaResponse)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
