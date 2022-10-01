// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESLACKWORKSPACECONFIGURATIONRESPONSE_H
#define QTAWS_DELETESLACKWORKSPACECONFIGURATIONRESPONSE_H

#include "supportappresponse.h"
#include "deleteslackworkspaceconfigurationrequest.h"

namespace QtAws {
namespace SupportApp {

class DeleteSlackWorkspaceConfigurationResponsePrivate;

class QTAWSSUPPORTAPP_EXPORT DeleteSlackWorkspaceConfigurationResponse : public SupportAppResponse {
    Q_OBJECT

public:
    DeleteSlackWorkspaceConfigurationResponse(const DeleteSlackWorkspaceConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSlackWorkspaceConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSlackWorkspaceConfigurationResponse)
    Q_DISABLE_COPY(DeleteSlackWorkspaceConfigurationResponse)

};

} // namespace SupportApp
} // namespace QtAws

#endif
