// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOMAINCONFIGURATIONSRESPONSE_H
#define QTAWS_LISTDOMAINCONFIGURATIONSRESPONSE_H

#include "iotresponse.h"
#include "listdomainconfigurationsrequest.h"

namespace QtAws {
namespace IoT {

class ListDomainConfigurationsResponsePrivate;

class QTAWSIOT_EXPORT ListDomainConfigurationsResponse : public IoTResponse {
    Q_OBJECT

public:
    ListDomainConfigurationsResponse(const ListDomainConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDomainConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDomainConfigurationsResponse)
    Q_DISABLE_COPY(ListDomainConfigurationsResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
