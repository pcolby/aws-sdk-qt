// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDBCLUSTERRESPONSE_H
#define QTAWS_STARTDBCLUSTERRESPONSE_H

#include "rdsresponse.h"
#include "startdbclusterrequest.h"

namespace QtAws {
namespace Rds {

class StartDBClusterResponsePrivate;

class QTAWSRDS_EXPORT StartDBClusterResponse : public RdsResponse {
    Q_OBJECT

public:
    StartDBClusterResponse(const StartDBClusterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartDBClusterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartDBClusterResponse)
    Q_DISABLE_COPY(StartDBClusterResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
