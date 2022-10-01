// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDBCLUSTERRESPONSE_H
#define QTAWS_STARTDBCLUSTERRESPONSE_H

#include "neptuneresponse.h"
#include "startdbclusterrequest.h"

namespace QtAws {
namespace Neptune {

class StartDBClusterResponsePrivate;

class QTAWSNEPTUNE_EXPORT StartDBClusterResponse : public NeptuneResponse {
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

} // namespace Neptune
} // namespace QtAws

#endif
