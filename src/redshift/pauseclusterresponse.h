// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PAUSECLUSTERRESPONSE_H
#define QTAWS_PAUSECLUSTERRESPONSE_H

#include "redshiftresponse.h"
#include "pauseclusterrequest.h"

namespace QtAws {
namespace Redshift {

class PauseClusterResponsePrivate;

class QTAWSREDSHIFT_EXPORT PauseClusterResponse : public RedshiftResponse {
    Q_OBJECT

public:
    PauseClusterResponse(const PauseClusterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PauseClusterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PauseClusterResponse)
    Q_DISABLE_COPY(PauseClusterResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
