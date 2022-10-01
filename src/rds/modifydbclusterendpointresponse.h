// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBCLUSTERENDPOINTRESPONSE_H
#define QTAWS_MODIFYDBCLUSTERENDPOINTRESPONSE_H

#include "rdsresponse.h"
#include "modifydbclusterendpointrequest.h"

namespace QtAws {
namespace Rds {

class ModifyDBClusterEndpointResponsePrivate;

class QTAWSRDS_EXPORT ModifyDBClusterEndpointResponse : public RdsResponse {
    Q_OBJECT

public:
    ModifyDBClusterEndpointResponse(const ModifyDBClusterEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyDBClusterEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyDBClusterEndpointResponse)
    Q_DISABLE_COPY(ModifyDBClusterEndpointResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
