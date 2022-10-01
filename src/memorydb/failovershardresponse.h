// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FAILOVERSHARDRESPONSE_H
#define QTAWS_FAILOVERSHARDRESPONSE_H

#include "memorydbresponse.h"
#include "failovershardrequest.h"

namespace QtAws {
namespace MemoryDb {

class FailoverShardResponsePrivate;

class QTAWSMEMORYDB_EXPORT FailoverShardResponse : public MemoryDbResponse {
    Q_OBJECT

public:
    FailoverShardResponse(const FailoverShardRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const FailoverShardRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(FailoverShardResponse)
    Q_DISABLE_COPY(FailoverShardResponse)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
