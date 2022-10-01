// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCATIONSMBREQUEST_H
#define QTAWS_DESCRIBELOCATIONSMBREQUEST_H

#include "datasyncrequest.h"

namespace QtAws {
namespace DataSync {

class DescribeLocationSmbRequestPrivate;

class QTAWSDATASYNC_EXPORT DescribeLocationSmbRequest : public DataSyncRequest {

public:
    DescribeLocationSmbRequest(const DescribeLocationSmbRequest &other);
    DescribeLocationSmbRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLocationSmbRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
