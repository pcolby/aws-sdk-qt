// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKSPACEREQUEST_H
#define QTAWS_DESCRIBEWORKSPACEREQUEST_H

#include "grafanarequest.h"

namespace QtAws {
namespace Grafana {

class DescribeWorkspaceRequestPrivate;

class QTAWSGRAFANA_EXPORT DescribeWorkspaceRequest : public GrafanaRequest {

public:
    DescribeWorkspaceRequest(const DescribeWorkspaceRequest &other);
    DescribeWorkspaceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWorkspaceRequest)

};

} // namespace Grafana
} // namespace QtAws

#endif
