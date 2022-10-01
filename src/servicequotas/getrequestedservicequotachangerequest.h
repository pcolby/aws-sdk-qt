// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREQUESTEDSERVICEQUOTACHANGEREQUEST_H
#define QTAWS_GETREQUESTEDSERVICEQUOTACHANGEREQUEST_H

#include "servicequotasrequest.h"

namespace QtAws {
namespace ServiceQuotas {

class GetRequestedServiceQuotaChangeRequestPrivate;

class QTAWSSERVICEQUOTAS_EXPORT GetRequestedServiceQuotaChangeRequest : public ServiceQuotasRequest {

public:
    GetRequestedServiceQuotaChangeRequest(const GetRequestedServiceQuotaChangeRequest &other);
    GetRequestedServiceQuotaChangeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRequestedServiceQuotaChangeRequest)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
