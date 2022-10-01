// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTCLUSTERRESPONSE_H
#define QTAWS_REBOOTCLUSTERRESPONSE_H

#include "redshiftresponse.h"
#include "rebootclusterrequest.h"

namespace QtAws {
namespace Redshift {

class RebootClusterResponsePrivate;

class QTAWSREDSHIFT_EXPORT RebootClusterResponse : public RedshiftResponse {
    Q_OBJECT

public:
    RebootClusterResponse(const RebootClusterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RebootClusterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RebootClusterResponse)
    Q_DISABLE_COPY(RebootClusterResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
