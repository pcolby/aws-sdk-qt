// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVALIDDBINSTANCEMODIFICATIONSREQUEST_H
#define QTAWS_DESCRIBEVALIDDBINSTANCEMODIFICATIONSREQUEST_H

#include "neptunerequest.h"

namespace QtAws {
namespace Neptune {

class DescribeValidDBInstanceModificationsRequestPrivate;

class QTAWSNEPTUNE_EXPORT DescribeValidDBInstanceModificationsRequest : public NeptuneRequest {

public:
    DescribeValidDBInstanceModificationsRequest(const DescribeValidDBInstanceModificationsRequest &other);
    DescribeValidDBInstanceModificationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeValidDBInstanceModificationsRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
