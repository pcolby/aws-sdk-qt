// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCATIONOBJECTSTORAGEREQUEST_H
#define QTAWS_DESCRIBELOCATIONOBJECTSTORAGEREQUEST_H

#include "datasyncrequest.h"

namespace QtAws {
namespace DataSync {

class DescribeLocationObjectStorageRequestPrivate;

class QTAWSDATASYNC_EXPORT DescribeLocationObjectStorageRequest : public DataSyncRequest {

public:
    DescribeLocationObjectStorageRequest(const DescribeLocationObjectStorageRequest &other);
    DescribeLocationObjectStorageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLocationObjectStorageRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
