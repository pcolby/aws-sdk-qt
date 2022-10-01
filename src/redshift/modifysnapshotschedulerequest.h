// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYSNAPSHOTSCHEDULEREQUEST_H
#define QTAWS_MODIFYSNAPSHOTSCHEDULEREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class ModifySnapshotScheduleRequestPrivate;

class QTAWSREDSHIFT_EXPORT ModifySnapshotScheduleRequest : public RedshiftRequest {

public:
    ModifySnapshotScheduleRequest(const ModifySnapshotScheduleRequest &other);
    ModifySnapshotScheduleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifySnapshotScheduleRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
