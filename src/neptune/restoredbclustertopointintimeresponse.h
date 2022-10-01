// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREDBCLUSTERTOPOINTINTIMERESPONSE_H
#define QTAWS_RESTOREDBCLUSTERTOPOINTINTIMERESPONSE_H

#include "neptuneresponse.h"
#include "restoredbclustertopointintimerequest.h"

namespace QtAws {
namespace Neptune {

class RestoreDBClusterToPointInTimeResponsePrivate;

class QTAWSNEPTUNE_EXPORT RestoreDBClusterToPointInTimeResponse : public NeptuneResponse {
    Q_OBJECT

public:
    RestoreDBClusterToPointInTimeResponse(const RestoreDBClusterToPointInTimeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RestoreDBClusterToPointInTimeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreDBClusterToPointInTimeResponse)
    Q_DISABLE_COPY(RestoreDBClusterToPointInTimeResponse)

};

} // namespace Neptune
} // namespace QtAws

#endif
