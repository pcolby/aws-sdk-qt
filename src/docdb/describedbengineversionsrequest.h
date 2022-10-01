// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBENGINEVERSIONSREQUEST_H
#define QTAWS_DESCRIBEDBENGINEVERSIONSREQUEST_H

#include "docdbrequest.h"

namespace QtAws {
namespace DocDb {

class DescribeDBEngineVersionsRequestPrivate;

class QTAWSDOCDB_EXPORT DescribeDBEngineVersionsRequest : public DocDbRequest {

public:
    DescribeDBEngineVersionsRequest(const DescribeDBEngineVersionsRequest &other);
    DescribeDBEngineVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBEngineVersionsRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
