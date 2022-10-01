// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBACKUPSREQUEST_H
#define QTAWS_DESCRIBEBACKUPSREQUEST_H

#include "fsxrequest.h"

namespace QtAws {
namespace FSx {

class DescribeBackupsRequestPrivate;

class QTAWSFSX_EXPORT DescribeBackupsRequest : public FSxRequest {

public:
    DescribeBackupsRequest(const DescribeBackupsRequest &other);
    DescribeBackupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBackupsRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
