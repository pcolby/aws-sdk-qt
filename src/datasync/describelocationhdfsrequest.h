// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCATIONHDFSREQUEST_H
#define QTAWS_DESCRIBELOCATIONHDFSREQUEST_H

#include "datasyncrequest.h"

namespace QtAws {
namespace DataSync {

class DescribeLocationHdfsRequestPrivate;

class QTAWSDATASYNC_EXPORT DescribeLocationHdfsRequest : public DataSyncRequest {

public:
    DescribeLocationHdfsRequest(const DescribeLocationHdfsRequest &other);
    DescribeLocationHdfsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLocationHdfsRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
