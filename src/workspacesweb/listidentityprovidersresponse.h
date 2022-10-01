// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIDENTITYPROVIDERSRESPONSE_H
#define QTAWS_LISTIDENTITYPROVIDERSRESPONSE_H

#include "workspaceswebresponse.h"
#include "listidentityprovidersrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class ListIdentityProvidersResponsePrivate;

class QTAWSWORKSPACESWEB_EXPORT ListIdentityProvidersResponse : public WorkSpacesWebResponse {
    Q_OBJECT

public:
    ListIdentityProvidersResponse(const ListIdentityProvidersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListIdentityProvidersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListIdentityProvidersResponse)
    Q_DISABLE_COPY(ListIdentityProvidersResponse)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
