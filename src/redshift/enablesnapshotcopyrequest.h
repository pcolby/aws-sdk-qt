// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLESNAPSHOTCOPYREQUEST_H
#define QTAWS_ENABLESNAPSHOTCOPYREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class EnableSnapshotCopyRequestPrivate;

class QTAWSREDSHIFT_EXPORT EnableSnapshotCopyRequest : public RedshiftRequest {

public:
    EnableSnapshotCopyRequest(const EnableSnapshotCopyRequest &other);
    EnableSnapshotCopyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableSnapshotCopyRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
