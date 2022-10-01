// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCATIONFSXOPENZFSREQUEST_H
#define QTAWS_DESCRIBELOCATIONFSXOPENZFSREQUEST_H

#include "datasyncrequest.h"

namespace QtAws {
namespace DataSync {

class DescribeLocationFsxOpenZfsRequestPrivate;

class QTAWSDATASYNC_EXPORT DescribeLocationFsxOpenZfsRequest : public DataSyncRequest {

public:
    DescribeLocationFsxOpenZfsRequest(const DescribeLocationFsxOpenZfsRequest &other);
    DescribeLocationFsxOpenZfsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLocationFsxOpenZfsRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
