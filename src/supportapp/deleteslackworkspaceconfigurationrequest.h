// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESLACKWORKSPACECONFIGURATIONREQUEST_H
#define QTAWS_DELETESLACKWORKSPACECONFIGURATIONREQUEST_H

#include "supportapprequest.h"

namespace QtAws {
namespace SupportApp {

class DeleteSlackWorkspaceConfigurationRequestPrivate;

class QTAWSSUPPORTAPP_EXPORT DeleteSlackWorkspaceConfigurationRequest : public SupportAppRequest {

public:
    DeleteSlackWorkspaceConfigurationRequest(const DeleteSlackWorkspaceConfigurationRequest &other);
    DeleteSlackWorkspaceConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSlackWorkspaceConfigurationRequest)

};

} // namespace SupportApp
} // namespace QtAws

#endif
