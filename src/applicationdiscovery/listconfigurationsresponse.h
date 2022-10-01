// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONFIGURATIONSRESPONSE_H
#define QTAWS_LISTCONFIGURATIONSRESPONSE_H

#include "applicationdiscoveryresponse.h"
#include "listconfigurationsrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class ListConfigurationsResponsePrivate;

class QTAWSAPPLICATIONDISCOVERY_EXPORT ListConfigurationsResponse : public ApplicationDiscoveryResponse {
    Q_OBJECT

public:
    ListConfigurationsResponse(const ListConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListConfigurationsResponse)
    Q_DISABLE_COPY(ListConfigurationsResponse)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
