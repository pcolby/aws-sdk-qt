// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBCLUSTERENDPOINTRESPONSE_H
#define QTAWS_DELETEDBCLUSTERENDPOINTRESPONSE_H

#include "neptuneresponse.h"
#include "deletedbclusterendpointrequest.h"

namespace QtAws {
namespace Neptune {

class DeleteDBClusterEndpointResponsePrivate;

class QTAWSNEPTUNE_EXPORT DeleteDBClusterEndpointResponse : public NeptuneResponse {
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

} // namespace Neptune
} // namespace QtAws

#endif
