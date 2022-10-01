// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVIRTUALCLUSTERRESPONSE_H
#define QTAWS_DESCRIBEVIRTUALCLUSTERRESPONSE_H

#include "emrcontainersresponse.h"
#include "describevirtualclusterrequest.h"

namespace QtAws {
namespace Emrcontainers {

class DescribeVirtualClusterResponsePrivate;

class QTAWSEMRCONTAINERS_EXPORT DescribeVirtualClusterResponse : public EmrcontainersResponse {
    Q_OBJECT

public:
    DescribeVirtualClusterResponse(const DescribeVirtualClusterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeVirtualClusterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVirtualClusterResponse)
    Q_DISABLE_COPY(DescribeVirtualClusterResponse)

};

} // namespace Emrcontainers
} // namespace QtAws

#endif
