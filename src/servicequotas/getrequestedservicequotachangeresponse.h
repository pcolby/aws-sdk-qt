// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREQUESTEDSERVICEQUOTACHANGERESPONSE_H
#define QTAWS_GETREQUESTEDSERVICEQUOTACHANGERESPONSE_H

#include "servicequotasresponse.h"
#include "getrequestedservicequotachangerequest.h"

namespace QtAws {
namespace ServiceQuotas {

class GetRequestedServiceQuotaChangeResponsePrivate;

class QTAWSSERVICEQUOTAS_EXPORT GetRequestedServiceQuotaChangeResponse : public ServiceQuotasResponse {
    Q_OBJECT

public:
    GetRequestedServiceQuotaChangeResponse(const GetRequestedServiceQuotaChangeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRequestedServiceQuotaChangeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRequestedServiceQuotaChangeResponse)
    Q_DISABLE_COPY(GetRequestedServiceQuotaChangeResponse)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
