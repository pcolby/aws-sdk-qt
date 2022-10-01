// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKSPACEAPIKEYREQUEST_H
#define QTAWS_CREATEWORKSPACEAPIKEYREQUEST_H

#include "grafanarequest.h"

namespace QtAws {
namespace Grafana {

class CreateWorkspaceApiKeyRequestPrivate;

class QTAWSGRAFANA_EXPORT CreateWorkspaceApiKeyRequest : public GrafanaRequest {

public:
    CreateWorkspaceApiKeyRequest(const CreateWorkspaceApiKeyRequest &other);
    CreateWorkspaceApiKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWorkspaceApiKeyRequest)

};

} // namespace Grafana
} // namespace QtAws

#endif
