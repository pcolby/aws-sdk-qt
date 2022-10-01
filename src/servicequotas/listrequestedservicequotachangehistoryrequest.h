// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREQUESTEDSERVICEQUOTACHANGEHISTORYREQUEST_H
#define QTAWS_LISTREQUESTEDSERVICEQUOTACHANGEHISTORYREQUEST_H

#include "servicequotasrequest.h"

namespace QtAws {
namespace ServiceQuotas {

class ListRequestedServiceQuotaChangeHistoryRequestPrivate;

class QTAWSSERVICEQUOTAS_EXPORT ListRequestedServiceQuotaChangeHistoryRequest : public ServiceQuotasRequest {

public:
    ListRequestedServiceQuotaChangeHistoryRequest(const ListRequestedServiceQuotaChangeHistoryRequest &other);
    ListRequestedServiceQuotaChangeHistoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRequestedServiceQuotaChangeHistoryRequest)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
