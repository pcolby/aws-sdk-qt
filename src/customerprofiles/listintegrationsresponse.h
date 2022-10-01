// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINTEGRATIONSRESPONSE_H
#define QTAWS_LISTINTEGRATIONSRESPONSE_H

#include "customerprofilesresponse.h"
#include "listintegrationsrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class ListIntegrationsResponsePrivate;

class QTAWSCUSTOMERPROFILES_EXPORT ListIntegrationsResponse : public CustomerProfilesResponse {
    Q_OBJECT

public:
    ListIntegrationsResponse(const ListIntegrationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListIntegrationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListIntegrationsResponse)
    Q_DISABLE_COPY(ListIntegrationsResponse)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
