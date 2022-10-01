// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSLACKWORKSPACECONFIGURATIONSRESPONSE_H
#define QTAWS_LISTSLACKWORKSPACECONFIGURATIONSRESPONSE_H

#include "supportappresponse.h"
#include "listslackworkspaceconfigurationsrequest.h"

namespace QtAws {
namespace SupportApp {

class ListSlackWorkspaceConfigurationsResponsePrivate;

class QTAWSSUPPORTAPP_EXPORT ListSlackWorkspaceConfigurationsResponse : public SupportAppResponse {
    Q_OBJECT

public:
    ListSlackWorkspaceConfigurationsResponse(const ListSlackWorkspaceConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSlackWorkspaceConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSlackWorkspaceConfigurationsResponse)
    Q_DISABLE_COPY(ListSlackWorkspaceConfigurationsResponse)

};

} // namespace SupportApp
} // namespace QtAws

#endif
