// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREQUESTEDSERVICEQUOTACHANGEHISTORYBYQUOTAREQUEST_H
#define QTAWS_LISTREQUESTEDSERVICEQUOTACHANGEHISTORYBYQUOTAREQUEST_H

#include "servicequotasrequest.h"

namespace QtAws {
namespace ServiceQuotas {

class ListRequestedServiceQuotaChangeHistoryByQuotaRequestPrivate;

class QTAWSSERVICEQUOTAS_EXPORT ListRequestedServiceQuotaChangeHistoryByQuotaRequest : public ServiceQuotasRequest {

public:
    ListRequestedServiceQuotaChangeHistoryByQuotaRequest(const ListRequestedServiceQuotaChangeHistoryByQuotaRequest &other);
    ListRequestedServiceQuotaChangeHistoryByQuotaRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRequestedServiceQuotaChangeHistoryByQuotaRequest)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
