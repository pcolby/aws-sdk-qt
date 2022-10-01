// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYSNAPSHOTREQUEST_H
#define QTAWS_COPYSNAPSHOTREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CopySnapshotRequestPrivate;

class QTAWSEC2_EXPORT CopySnapshotRequest : public Ec2Request {

public:
    CopySnapshotRequest(const CopySnapshotRequest &other);
    CopySnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CopySnapshotRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
