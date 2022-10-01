// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETSNAPSHOTATTRIBUTEREQUEST_H
#define QTAWS_RESETSNAPSHOTATTRIBUTEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ResetSnapshotAttributeRequestPrivate;

class QTAWSEC2_EXPORT ResetSnapshotAttributeRequest : public Ec2Request {

public:
    ResetSnapshotAttributeRequest(const ResetSnapshotAttributeRequest &other);
    ResetSnapshotAttributeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResetSnapshotAttributeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
