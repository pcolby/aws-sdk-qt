// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICEQUOTAREQUEST_H
#define QTAWS_GETSERVICEQUOTAREQUEST_H

#include "servicequotasrequest.h"

namespace QtAws {
namespace ServiceQuotas {

class GetServiceQuotaRequestPrivate;

class QTAWSSERVICEQUOTAS_EXPORT GetServiceQuotaRequest : public ServiceQuotasRequest {

public:
    GetServiceQuotaRequest(const GetServiceQuotaRequest &other);
    GetServiceQuotaRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetServiceQuotaRequest)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
