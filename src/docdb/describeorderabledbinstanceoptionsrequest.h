// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORDERABLEDBINSTANCEOPTIONSREQUEST_H
#define QTAWS_DESCRIBEORDERABLEDBINSTANCEOPTIONSREQUEST_H

#include "docdbrequest.h"

namespace QtAws {
namespace DocDb {

class DescribeOrderableDBInstanceOptionsRequestPrivate;

class QTAWSDOCDB_EXPORT DescribeOrderableDBInstanceOptionsRequest : public DocDbRequest {

public:
    DescribeOrderableDBInstanceOptionsRequest(const DescribeOrderableDBInstanceOptionsRequest &other);
    DescribeOrderableDBInstanceOptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOrderableDBInstanceOptionsRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
