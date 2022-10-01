// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESERVICEUPDATESREQUEST_H
#define QTAWS_DESCRIBESERVICEUPDATESREQUEST_H

#include "memorydbrequest.h"

namespace QtAws {
namespace MemoryDb {

class DescribeServiceUpdatesRequestPrivate;

class QTAWSMEMORYDB_EXPORT DescribeServiceUpdatesRequest : public MemoryDbRequest {

public:
    DescribeServiceUpdatesRequest(const DescribeServiceUpdatesRequest &other);
    DescribeServiceUpdatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeServiceUpdatesRequest)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
