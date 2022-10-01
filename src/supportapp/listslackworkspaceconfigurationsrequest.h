// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSLACKWORKSPACECONFIGURATIONSREQUEST_H
#define QTAWS_LISTSLACKWORKSPACECONFIGURATIONSREQUEST_H

#include "supportapprequest.h"

namespace QtAws {
namespace SupportApp {

class ListSlackWorkspaceConfigurationsRequestPrivate;

class QTAWSSUPPORTAPP_EXPORT ListSlackWorkspaceConfigurationsRequest : public SupportAppRequest {

public:
    ListSlackWorkspaceConfigurationsRequest(const ListSlackWorkspaceConfigurationsRequest &other);
    ListSlackWorkspaceConfigurationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSlackWorkspaceConfigurationsRequest)

};

} // namespace SupportApp
} // namespace QtAws

#endif
