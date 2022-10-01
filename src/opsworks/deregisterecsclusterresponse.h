// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERECSCLUSTERRESPONSE_H
#define QTAWS_DEREGISTERECSCLUSTERRESPONSE_H

#include "opsworksresponse.h"
#include "deregisterecsclusterrequest.h"

namespace QtAws {
namespace OpsWorks {

class DeregisterEcsClusterResponsePrivate;

class QTAWSOPSWORKS_EXPORT DeregisterEcsClusterResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    DeregisterEcsClusterResponse(const DeregisterEcsClusterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeregisterEcsClusterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterEcsClusterResponse)
    Q_DISABLE_COPY(DeregisterEcsClusterResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
