// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCATIONFSXWINDOWSREQUEST_H
#define QTAWS_DESCRIBELOCATIONFSXWINDOWSREQUEST_H

#include "datasyncrequest.h"

namespace QtAws {
namespace DataSync {

class DescribeLocationFsxWindowsRequestPrivate;

class QTAWSDATASYNC_EXPORT DescribeLocationFsxWindowsRequest : public DataSyncRequest {

public:
    DescribeLocationFsxWindowsRequest(const DescribeLocationFsxWindowsRequest &other);
    DescribeLocationFsxWindowsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLocationFsxWindowsRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
