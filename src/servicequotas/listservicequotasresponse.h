// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICEQUOTASRESPONSE_H
#define QTAWS_LISTSERVICEQUOTASRESPONSE_H

#include "servicequotasresponse.h"
#include "listservicequotasrequest.h"

namespace QtAws {
namespace ServiceQuotas {

class ListServiceQuotasResponsePrivate;

class QTAWSSERVICEQUOTAS_EXPORT ListServiceQuotasResponse : public ServiceQuotasResponse {
    Q_OBJECT

public:
    ListServiceQuotasResponse(const ListServiceQuotasRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListServiceQuotasRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListServiceQuotasResponse)
    Q_DISABLE_COPY(ListServiceQuotasResponse)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
