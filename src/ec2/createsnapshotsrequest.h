// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESNAPSHOTSREQUEST_H
#define QTAWS_CREATESNAPSHOTSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateSnapshotsRequestPrivate;

class QTAWSEC2_EXPORT CreateSnapshotsRequest : public Ec2Request {

public:
    CreateSnapshotsRequest(const CreateSnapshotsRequest &other);
    CreateSnapshotsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSnapshotsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
