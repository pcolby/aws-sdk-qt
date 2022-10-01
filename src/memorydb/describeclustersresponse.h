// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERSRESPONSE_H
#define QTAWS_DESCRIBECLUSTERSRESPONSE_H

#include "memorydbresponse.h"
#include "describeclustersrequest.h"

namespace QtAws {
namespace MemoryDb {

class DescribeClustersResponsePrivate;

class QTAWSMEMORYDB_EXPORT DescribeClustersResponse : public MemoryDbResponse {
    Q_OBJECT

public:
    DescribeClustersResponse(const DescribeClustersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeClustersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeClustersResponse)
    Q_DISABLE_COPY(DescribeClustersResponse)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
