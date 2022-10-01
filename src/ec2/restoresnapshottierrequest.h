// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTORESNAPSHOTTIERREQUEST_H
#define QTAWS_RESTORESNAPSHOTTIERREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class RestoreSnapshotTierRequestPrivate;

class QTAWSEC2_EXPORT RestoreSnapshotTierRequest : public Ec2Request {

public:
    RestoreSnapshotTierRequest(const RestoreSnapshotTierRequest &other);
    RestoreSnapshotTierRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreSnapshotTierRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
