// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICEQUOTASREQUEST_H
#define QTAWS_LISTSERVICEQUOTASREQUEST_H

#include "servicequotasrequest.h"

namespace QtAws {
namespace ServiceQuotas {

class ListServiceQuotasRequestPrivate;

class QTAWSSERVICEQUOTAS_EXPORT ListServiceQuotasRequest : public ServiceQuotasRequest {

public:
    ListServiceQuotasRequest(const ListServiceQuotasRequest &other);
    ListServiceQuotasRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListServiceQuotasRequest)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
