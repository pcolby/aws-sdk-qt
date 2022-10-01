// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSNAPSHOTSINRECYCLEBINREQUEST_H
#define QTAWS_LISTSNAPSHOTSINRECYCLEBINREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ListSnapshotsInRecycleBinRequestPrivate;

class QTAWSEC2_EXPORT ListSnapshotsInRecycleBinRequest : public Ec2Request {

public:
    ListSnapshotsInRecycleBinRequest(const ListSnapshotsInRecycleBinRequest &other);
    ListSnapshotsInRecycleBinRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSnapshotsInRecycleBinRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
