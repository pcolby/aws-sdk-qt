// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLESNAPSHOTCOPYREQUEST_H
#define QTAWS_DISABLESNAPSHOTCOPYREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class DisableSnapshotCopyRequestPrivate;

class QTAWSREDSHIFT_EXPORT DisableSnapshotCopyRequest : public RedshiftRequest {

public:
    DisableSnapshotCopyRequest(const DisableSnapshotCopyRequest &other);
    DisableSnapshotCopyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableSnapshotCopyRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
