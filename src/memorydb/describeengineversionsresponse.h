// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENGINEVERSIONSRESPONSE_H
#define QTAWS_DESCRIBEENGINEVERSIONSRESPONSE_H

#include "memorydbresponse.h"
#include "describeengineversionsrequest.h"

namespace QtAws {
namespace MemoryDb {

class DescribeEngineVersionsResponsePrivate;

class QTAWSMEMORYDB_EXPORT DescribeEngineVersionsResponse : public MemoryDbResponse {
    Q_OBJECT

public:
    DescribeEngineVersionsResponse(const DescribeEngineVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEngineVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEngineVersionsResponse)
    Q_DISABLE_COPY(DescribeEngineVersionsResponse)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
