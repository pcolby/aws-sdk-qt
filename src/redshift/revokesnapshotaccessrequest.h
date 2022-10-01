// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKESNAPSHOTACCESSREQUEST_H
#define QTAWS_REVOKESNAPSHOTACCESSREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class RevokeSnapshotAccessRequestPrivate;

class QTAWSREDSHIFT_EXPORT RevokeSnapshotAccessRequest : public RedshiftRequest {

public:
    RevokeSnapshotAccessRequest(const RevokeSnapshotAccessRequest &other);
    RevokeSnapshotAccessRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RevokeSnapshotAccessRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
