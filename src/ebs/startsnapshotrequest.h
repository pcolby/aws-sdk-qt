// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSNAPSHOTREQUEST_H
#define QTAWS_STARTSNAPSHOTREQUEST_H

#include "ebsrequest.h"

namespace QtAws {
namespace Ebs {

class StartSnapshotRequestPrivate;

class QTAWSEBS_EXPORT StartSnapshotRequest : public EbsRequest {

public:
    StartSnapshotRequest(const StartSnapshotRequest &other);
    StartSnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartSnapshotRequest)

};

} // namespace Ebs
} // namespace QtAws

#endif
