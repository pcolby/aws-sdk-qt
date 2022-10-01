// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREQUESTEDSERVICEQUOTACHANGEHISTORYBYQUOTARESPONSE_H
#define QTAWS_LISTREQUESTEDSERVICEQUOTACHANGEHISTORYBYQUOTARESPONSE_H

#include "servicequotasresponse.h"
#include "listrequestedservicequotachangehistorybyquotarequest.h"

namespace QtAws {
namespace ServiceQuotas {

class ListRequestedServiceQuotaChangeHistoryByQuotaResponsePrivate;

class QTAWSSERVICEQUOTAS_EXPORT ListRequestedServiceQuotaChangeHistoryByQuotaResponse : public ServiceQuotasResponse {
    Q_OBJECT

public:
    ListRequestedServiceQuotaChangeHistoryByQuotaResponse(const ListRequestedServiceQuotaChangeHistoryByQuotaRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRequestedServiceQuotaChangeHistoryByQuotaRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRequestedServiceQuotaChangeHistoryByQuotaResponse)
    Q_DISABLE_COPY(ListRequestedServiceQuotaChangeHistoryByQuotaResponse)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
