// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCATIONEFSREQUEST_H
#define QTAWS_DESCRIBELOCATIONEFSREQUEST_H

#include "datasyncrequest.h"

namespace QtAws {
namespace DataSync {

class DescribeLocationEfsRequestPrivate;

class QTAWSDATASYNC_EXPORT DescribeLocationEfsRequest : public DataSyncRequest {

public:
    DescribeLocationEfsRequest(const DescribeLocationEfsRequest &other);
    DescribeLocationEfsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLocationEfsRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
