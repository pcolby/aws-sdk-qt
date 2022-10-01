// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAWSDEFAULTSERVICEQUOTAREQUEST_H
#define QTAWS_GETAWSDEFAULTSERVICEQUOTAREQUEST_H

#include "servicequotasrequest.h"

namespace QtAws {
namespace ServiceQuotas {

class GetAWSDefaultServiceQuotaRequestPrivate;

class QTAWSSERVICEQUOTAS_EXPORT GetAWSDefaultServiceQuotaRequest : public ServiceQuotasRequest {

public:
    GetAWSDefaultServiceQuotaRequest(const GetAWSDefaultServiceQuotaRequest &other);
    GetAWSDefaultServiceQuotaRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAWSDefaultServiceQuotaRequest)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
