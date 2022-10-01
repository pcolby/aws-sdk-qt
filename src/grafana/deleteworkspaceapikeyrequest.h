// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKSPACEAPIKEYREQUEST_H
#define QTAWS_DELETEWORKSPACEAPIKEYREQUEST_H

#include "grafanarequest.h"

namespace QtAws {
namespace Grafana {

class DeleteWorkspaceApiKeyRequestPrivate;

class QTAWSGRAFANA_EXPORT DeleteWorkspaceApiKeyRequest : public GrafanaRequest {

public:
    DeleteWorkspaceApiKeyRequest(const DeleteWorkspaceApiKeyRequest &other);
    DeleteWorkspaceApiKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWorkspaceApiKeyRequest)

};

} // namespace Grafana
} // namespace QtAws

#endif
