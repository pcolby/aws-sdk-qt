// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHUPDATECLUSTERRESPONSE_H
#define QTAWS_BATCHUPDATECLUSTERRESPONSE_H

#include "memorydbresponse.h"
#include "batchupdateclusterrequest.h"

namespace QtAws {
namespace MemoryDb {

class BatchUpdateClusterResponsePrivate;

class QTAWSMEMORYDB_EXPORT BatchUpdateClusterResponse : public MemoryDbResponse {
    Q_OBJECT

public:
    BatchUpdateClusterResponse(const BatchUpdateClusterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchUpdateClusterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchUpdateClusterResponse)
    Q_DISABLE_COPY(BatchUpdateClusterResponse)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
