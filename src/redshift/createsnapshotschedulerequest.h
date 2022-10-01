// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESNAPSHOTSCHEDULEREQUEST_H
#define QTAWS_CREATESNAPSHOTSCHEDULEREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class CreateSnapshotScheduleRequestPrivate;

class QTAWSREDSHIFT_EXPORT CreateSnapshotScheduleRequest : public RedshiftRequest {

public:
    CreateSnapshotScheduleRequest(const CreateSnapshotScheduleRequest &other);
    CreateSnapshotScheduleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSnapshotScheduleRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
