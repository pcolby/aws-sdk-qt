// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVIRTUALNODERESPONSE_H
#define QTAWS_DESCRIBEVIRTUALNODERESPONSE_H

#include "appmeshresponse.h"
#include "describevirtualnoderequest.h"

namespace QtAws {
namespace AppMesh {

class DescribeVirtualNodeResponsePrivate;

class QTAWSAPPMESH_EXPORT DescribeVirtualNodeResponse : public AppMeshResponse {
    Q_OBJECT

public:
    DescribeVirtualNodeResponse(const DescribeVirtualNodeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeVirtualNodeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVirtualNodeResponse)
    Q_DISABLE_COPY(DescribeVirtualNodeResponse)

};

} // namespace AppMesh
} // namespace QtAws

#endif
