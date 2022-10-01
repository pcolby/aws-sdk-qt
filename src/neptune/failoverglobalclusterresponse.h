// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FAILOVERGLOBALCLUSTERRESPONSE_H
#define QTAWS_FAILOVERGLOBALCLUSTERRESPONSE_H

#include "neptuneresponse.h"
#include "failoverglobalclusterrequest.h"

namespace QtAws {
namespace Neptune {

class FailoverGlobalClusterResponsePrivate;

class QTAWSNEPTUNE_EXPORT FailoverGlobalClusterResponse : public NeptuneResponse {
    Q_OBJECT

public:
    FailoverGlobalClusterResponse(const FailoverGlobalClusterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const FailoverGlobalClusterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(FailoverGlobalClusterResponse)
    Q_DISABLE_COPY(FailoverGlobalClusterResponse)

};

} // namespace Neptune
} // namespace QtAws

#endif
