// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPDBCLUSTERRESPONSE_H
#define QTAWS_STOPDBCLUSTERRESPONSE_H

#include "docdbresponse.h"
#include "stopdbclusterrequest.h"

namespace QtAws {
namespace DocDb {

class StopDBClusterResponsePrivate;

class QTAWSDOCDB_EXPORT StopDBClusterResponse : public DocDbResponse {
    Q_OBJECT

public:
    StopDBClusterResponse(const StopDBClusterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopDBClusterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopDBClusterResponse)
    Q_DISABLE_COPY(StopDBClusterResponse)

};

} // namespace DocDb
} // namespace QtAws

#endif
