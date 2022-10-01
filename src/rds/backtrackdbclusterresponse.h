// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BACKTRACKDBCLUSTERRESPONSE_H
#define QTAWS_BACKTRACKDBCLUSTERRESPONSE_H

#include "rdsresponse.h"
#include "backtrackdbclusterrequest.h"

namespace QtAws {
namespace Rds {

class BacktrackDBClusterResponsePrivate;

class QTAWSRDS_EXPORT BacktrackDBClusterResponse : public RdsResponse {
    Q_OBJECT

public:
    BacktrackDBClusterResponse(const BacktrackDBClusterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BacktrackDBClusterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BacktrackDBClusterResponse)
    Q_DISABLE_COPY(BacktrackDBClusterResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
