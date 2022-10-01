// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKSPACERESPONSE_H
#define QTAWS_DESCRIBEWORKSPACERESPONSE_H

#include "grafanaresponse.h"
#include "describeworkspacerequest.h"

namespace QtAws {
namespace Grafana {

class DescribeWorkspaceResponsePrivate;

class QTAWSGRAFANA_EXPORT DescribeWorkspaceResponse : public GrafanaResponse {
    Q_OBJECT

public:
    DescribeWorkspaceResponse(const DescribeWorkspaceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeWorkspaceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWorkspaceResponse)
    Q_DISABLE_COPY(DescribeWorkspaceResponse)

};

} // namespace Grafana
} // namespace QtAws

#endif
