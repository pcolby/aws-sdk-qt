// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCATIONNFSREQUEST_H
#define QTAWS_DESCRIBELOCATIONNFSREQUEST_H

#include "datasyncrequest.h"

namespace QtAws {
namespace DataSync {

class DescribeLocationNfsRequestPrivate;

class QTAWSDATASYNC_EXPORT DescribeLocationNfsRequest : public DataSyncRequest {

public:
    DescribeLocationNfsRequest(const DescribeLocationNfsRequest &other);
    DescribeLocationNfsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLocationNfsRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
