// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESNAPSHOTREQUEST_H
#define QTAWS_CREATESNAPSHOTREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateSnapshotRequestPrivate;

class QTAWSEC2_EXPORT CreateSnapshotRequest : public Ec2Request {

public:
    CreateSnapshotRequest(const CreateSnapshotRequest &other);
    CreateSnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSnapshotRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
