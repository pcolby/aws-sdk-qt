// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTORESNAPSHOTFROMRECYCLEBINREQUEST_H
#define QTAWS_RESTORESNAPSHOTFROMRECYCLEBINREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class RestoreSnapshotFromRecycleBinRequestPrivate;

class QTAWSEC2_EXPORT RestoreSnapshotFromRecycleBinRequest : public Ec2Request {

public:
    RestoreSnapshotFromRecycleBinRequest(const RestoreSnapshotFromRecycleBinRequest &other);
    RestoreSnapshotFromRecycleBinRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreSnapshotFromRecycleBinRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
