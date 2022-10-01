// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESNAPSHOTSREQUEST_H
#define QTAWS_DESCRIBESNAPSHOTSREQUEST_H

#include "fsxrequest.h"

namespace QtAws {
namespace FSx {

class DescribeSnapshotsRequestPrivate;

class QTAWSFSX_EXPORT DescribeSnapshotsRequest : public FSxRequest {

public:
    DescribeSnapshotsRequest(const DescribeSnapshotsRequest &other);
    DescribeSnapshotsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSnapshotsRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
