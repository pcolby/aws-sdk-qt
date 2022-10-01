// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBCLUSTERENDPOINTRESPONSE_H
#define QTAWS_DELETEDBCLUSTERENDPOINTRESPONSE_H

#include "rdsresponse.h"
#include "deletedbclusterendpointrequest.h"

namespace QtAws {
namespace Rds {

class DeleteDBClusterEndpointResponsePrivate;

class QTAWSRDS_EXPORT DeleteDBClusterEndpointResponse : public RdsResponse {
    Q_OBJECT

public:
    DeleteDBClusterEndpointResponse(const DeleteDBClusterEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDBClusterEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDBClusterEndpointResponse)
    Q_DISABLE_COPY(DeleteDBClusterEndpointResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
