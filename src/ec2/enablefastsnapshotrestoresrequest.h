// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEFASTSNAPSHOTRESTORESREQUEST_H
#define QTAWS_ENABLEFASTSNAPSHOTRESTORESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class EnableFastSnapshotRestoresRequestPrivate;

class QTAWSEC2_EXPORT EnableFastSnapshotRestoresRequest : public Ec2Request {

public:
    EnableFastSnapshotRestoresRequest(const EnableFastSnapshotRestoresRequest &other);
    EnableFastSnapshotRestoresRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableFastSnapshotRestoresRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
