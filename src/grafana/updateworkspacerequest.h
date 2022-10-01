// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORKSPACEREQUEST_H
#define QTAWS_UPDATEWORKSPACEREQUEST_H

#include "grafanarequest.h"

namespace QtAws {
namespace Grafana {

class UpdateWorkspaceRequestPrivate;

class QTAWSGRAFANA_EXPORT UpdateWorkspaceRequest : public GrafanaRequest {

public:
    UpdateWorkspaceRequest(const UpdateWorkspaceRequest &other);
    UpdateWorkspaceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateWorkspaceRequest)

};

} // namespace Grafana
} // namespace QtAws

#endif
