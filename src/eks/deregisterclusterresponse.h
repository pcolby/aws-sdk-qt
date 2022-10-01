// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERCLUSTERRESPONSE_H
#define QTAWS_DEREGISTERCLUSTERRESPONSE_H

#include "eksresponse.h"
#include "deregisterclusterrequest.h"

namespace QtAws {
namespace Eks {

class DeregisterClusterResponsePrivate;

class QTAWSEKS_EXPORT DeregisterClusterResponse : public EksResponse {
    Q_OBJECT

public:
    DeregisterClusterResponse(const DeregisterClusterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeregisterClusterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterClusterResponse)
    Q_DISABLE_COPY(DeregisterClusterResponse)

};

} // namespace Eks
} // namespace QtAws

#endif
