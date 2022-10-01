// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESNAPSHOTCOPYGRANTREQUEST_H
#define QTAWS_CREATESNAPSHOTCOPYGRANTREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class CreateSnapshotCopyGrantRequestPrivate;

class QTAWSREDSHIFT_EXPORT CreateSnapshotCopyGrantRequest : public RedshiftRequest {

public:
    CreateSnapshotCopyGrantRequest(const CreateSnapshotCopyGrantRequest &other);
    CreateSnapshotCopyGrantRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSnapshotCopyGrantRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
