// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATAINTEGRATIONSRESPONSE_H
#define QTAWS_LISTDATAINTEGRATIONSRESPONSE_H

#include "appintegrationsresponse.h"
#include "listdataintegrationsrequest.h"

namespace QtAws {
namespace AppIntegrations {

class ListDataIntegrationsResponsePrivate;

class QTAWSAPPINTEGRATIONS_EXPORT ListDataIntegrationsResponse : public AppIntegrationsResponse {
    Q_OBJECT

public:
    ListDataIntegrationsResponse(const ListDataIntegrationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDataIntegrationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDataIntegrationsResponse)
    Q_DISABLE_COPY(ListDataIntegrationsResponse)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
