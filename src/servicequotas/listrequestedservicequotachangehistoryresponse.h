// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREQUESTEDSERVICEQUOTACHANGEHISTORYRESPONSE_H
#define QTAWS_LISTREQUESTEDSERVICEQUOTACHANGEHISTORYRESPONSE_H

#include "servicequotasresponse.h"
#include "listrequestedservicequotachangehistoryrequest.h"

namespace QtAws {
namespace ServiceQuotas {

class ListRequestedServiceQuotaChangeHistoryResponsePrivate;

class QTAWSSERVICEQUOTAS_EXPORT ListRequestedServiceQuotaChangeHistoryResponse : public ServiceQuotasResponse {
    Q_OBJECT

public:
    ListRequestedServiceQuotaChangeHistoryResponse(const ListRequestedServiceQuotaChangeHistoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRequestedServiceQuotaChangeHistoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRequestedServiceQuotaChangeHistoryResponse)
    Q_DISABLE_COPY(ListRequestedServiceQuotaChangeHistoryResponse)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
