// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTINTEGRATIONSRESPONSE_H
#define QTAWS_LISTACCOUNTINTEGRATIONSRESPONSE_H

#include "customerprofilesresponse.h"
#include "listaccountintegrationsrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class ListAccountIntegrationsResponsePrivate;

class QTAWSCUSTOMERPROFILES_EXPORT ListAccountIntegrationsResponse : public CustomerProfilesResponse {
    Q_OBJECT

public:
    ListAccountIntegrationsResponse(const ListAccountIntegrationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAccountIntegrationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAccountIntegrationsResponse)
    Q_DISABLE_COPY(ListAccountIntegrationsResponse)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
