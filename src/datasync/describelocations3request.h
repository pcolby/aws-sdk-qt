// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCATIONS3REQUEST_H
#define QTAWS_DESCRIBELOCATIONS3REQUEST_H

#include "datasyncrequest.h"

namespace QtAws {
namespace DataSync {

class DescribeLocationS3RequestPrivate;

class QTAWSDATASYNC_EXPORT DescribeLocationS3Request : public DataSyncRequest {

public:
    DescribeLocationS3Request(const DescribeLocationS3Request &other);
    DescribeLocationS3Request();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLocationS3Request)

};

} // namespace DataSync
} // namespace QtAws

#endif
