// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTDBCLUSTERRESPONSE_H
#define QTAWS_REBOOTDBCLUSTERRESPONSE_H

#include "rdsresponse.h"
#include "rebootdbclusterrequest.h"

namespace QtAws {
namespace Rds {

class RebootDBClusterResponsePrivate;

class QTAWSRDS_EXPORT RebootDBClusterResponse : public RdsResponse {
    Q_OBJECT

public:
    RebootDBClusterResponse(const RebootDBClusterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RebootDBClusterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RebootDBClusterResponse)
    Q_DISABLE_COPY(RebootDBClusterResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
