// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWEBSITEAUTHORIZATIONPROVIDERSRESPONSE_H
#define QTAWS_LISTWEBSITEAUTHORIZATIONPROVIDERSRESPONSE_H

#include "worklinkresponse.h"
#include "listwebsiteauthorizationprovidersrequest.h"

namespace QtAws {
namespace WorkLink {

class ListWebsiteAuthorizationProvidersResponsePrivate;

class QTAWSWORKLINK_EXPORT ListWebsiteAuthorizationProvidersResponse : public WorkLinkResponse {
    Q_OBJECT

public:
    ListWebsiteAuthorizationProvidersResponse(const ListWebsiteAuthorizationProvidersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListWebsiteAuthorizationProvidersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWebsiteAuthorizationProvidersResponse)
    Q_DISABLE_COPY(ListWebsiteAuthorizationProvidersResponse)

};

} // namespace WorkLink
} // namespace QtAws

#endif
