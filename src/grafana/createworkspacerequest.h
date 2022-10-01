// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKSPACEREQUEST_H
#define QTAWS_CREATEWORKSPACEREQUEST_H

#include "grafanarequest.h"

namespace QtAws {
namespace Grafana {

class CreateWorkspaceRequestPrivate;

class QTAWSGRAFANA_EXPORT CreateWorkspaceRequest : public GrafanaRequest {

public:
    CreateWorkspaceRequest(const CreateWorkspaceRequest &other);
    CreateWorkspaceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWorkspaceRequest)

};

} // namespace Grafana
} // namespace QtAws

#endif
