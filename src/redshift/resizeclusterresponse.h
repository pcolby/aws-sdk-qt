// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESIZECLUSTERRESPONSE_H
#define QTAWS_RESIZECLUSTERRESPONSE_H

#include "redshiftresponse.h"
#include "resizeclusterrequest.h"

namespace QtAws {
namespace Redshift {

class ResizeClusterResponsePrivate;

class QTAWSREDSHIFT_EXPORT ResizeClusterResponse : public RedshiftResponse {
    Q_OBJECT

public:
    ResizeClusterResponse(const ResizeClusterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ResizeClusterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResizeClusterResponse)
    Q_DISABLE_COPY(ResizeClusterResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
