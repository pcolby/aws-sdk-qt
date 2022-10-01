// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCATIONFSXLUSTREREQUEST_H
#define QTAWS_DESCRIBELOCATIONFSXLUSTREREQUEST_H

#include "datasyncrequest.h"

namespace QtAws {
namespace DataSync {

class DescribeLocationFsxLustreRequestPrivate;

class QTAWSDATASYNC_EXPORT DescribeLocationFsxLustreRequest : public DataSyncRequest {

public:
    DescribeLocationFsxLustreRequest(const DescribeLocationFsxLustreRequest &other);
    DescribeLocationFsxLustreRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLocationFsxLustreRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
