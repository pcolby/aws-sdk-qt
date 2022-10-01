// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENGINEVERSIONSREQUEST_H
#define QTAWS_DESCRIBEENGINEVERSIONSREQUEST_H

#include "memorydbrequest.h"

namespace QtAws {
namespace MemoryDb {

class DescribeEngineVersionsRequestPrivate;

class QTAWSMEMORYDB_EXPORT DescribeEngineVersionsRequest : public MemoryDbRequest {

public:
    DescribeEngineVersionsRequest(const DescribeEngineVersionsRequest &other);
    DescribeEngineVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEngineVersionsRequest)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
