// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYSNAPSHOTREQUEST_H
#define QTAWS_COPYSNAPSHOTREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class CopySnapshotRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT CopySnapshotRequest : public LightsailRequest {

public:
    CopySnapshotRequest(const CopySnapshotRequest &other);
    CopySnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CopySnapshotRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
