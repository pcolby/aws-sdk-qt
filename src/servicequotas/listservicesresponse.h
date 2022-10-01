// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICESRESPONSE_H
#define QTAWS_LISTSERVICESRESPONSE_H

#include "servicequotasresponse.h"
#include "listservicesrequest.h"

namespace QtAws {
namespace ServiceQuotas {

class ListServicesResponsePrivate;

class QTAWSSERVICEQUOTAS_EXPORT ListServicesResponse : public ServiceQuotasResponse {
    Q_OBJECT

public:
    ListServicesResponse(const ListServicesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListServicesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListServicesResponse)
    Q_DISABLE_COPY(ListServicesResponse)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
