// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAWSDEFAULTSERVICEQUOTASRESPONSE_H
#define QTAWS_LISTAWSDEFAULTSERVICEQUOTASRESPONSE_H

#include "servicequotasresponse.h"
#include "listawsdefaultservicequotasrequest.h"

namespace QtAws {
namespace ServiceQuotas {

class ListAWSDefaultServiceQuotasResponsePrivate;

class QTAWSSERVICEQUOTAS_EXPORT ListAWSDefaultServiceQuotasResponse : public ServiceQuotasResponse {
    Q_OBJECT

public:
    ListAWSDefaultServiceQuotasResponse(const ListAWSDefaultServiceQuotasRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAWSDefaultServiceQuotasRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAWSDefaultServiceQuotasResponse)
    Q_DISABLE_COPY(ListAWSDefaultServiceQuotasResponse)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
