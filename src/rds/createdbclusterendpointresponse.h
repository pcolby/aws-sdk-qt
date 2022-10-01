// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBCLUSTERENDPOINTRESPONSE_H
#define QTAWS_CREATEDBCLUSTERENDPOINTRESPONSE_H

#include "rdsresponse.h"
#include "createdbclusterendpointrequest.h"

namespace QtAws {
namespace Rds {

class CreateDBClusterEndpointResponsePrivate;

class QTAWSRDS_EXPORT CreateDBClusterEndpointResponse : public RdsResponse {
    Q_OBJECT

public:
    CreateDBClusterEndpointResponse(const CreateDBClusterEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDBClusterEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDBClusterEndpointResponse)
    Q_DISABLE_COPY(CreateDBClusterEndpointResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
