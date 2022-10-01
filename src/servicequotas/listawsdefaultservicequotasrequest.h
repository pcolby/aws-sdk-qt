// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAWSDEFAULTSERVICEQUOTASREQUEST_H
#define QTAWS_LISTAWSDEFAULTSERVICEQUOTASREQUEST_H

#include "servicequotasrequest.h"

namespace QtAws {
namespace ServiceQuotas {

class ListAWSDefaultServiceQuotasRequestPrivate;

class QTAWSSERVICEQUOTAS_EXPORT ListAWSDefaultServiceQuotasRequest : public ServiceQuotasRequest {

public:
    ListAWSDefaultServiceQuotasRequest(const ListAWSDefaultServiceQuotasRequest &other);
    ListAWSDefaultServiceQuotasRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAWSDefaultServiceQuotasRequest)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
