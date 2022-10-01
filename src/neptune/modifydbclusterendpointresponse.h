// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBCLUSTERENDPOINTRESPONSE_H
#define QTAWS_MODIFYDBCLUSTERENDPOINTRESPONSE_H

#include "neptuneresponse.h"
#include "modifydbclusterendpointrequest.h"

namespace QtAws {
namespace Neptune {

class ModifyDBClusterEndpointResponsePrivate;

class QTAWSNEPTUNE_EXPORT ModifyDBClusterEndpointResponse : public NeptuneResponse {
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

} // namespace Neptune
} // namespace QtAws

#endif
