// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLYPENDINGMAINTENANCEACTIONREQUEST_H
#define QTAWS_APPLYPENDINGMAINTENANCEACTIONREQUEST_H

#include "docdbrequest.h"

namespace QtAws {
namespace DocDb {

class ApplyPendingMaintenanceActionRequestPrivate;

class QTAWSDOCDB_EXPORT ApplyPendingMaintenanceActionRequest : public DocDbRequest {

public:
    ApplyPendingMaintenanceActionRequest(const ApplyPendingMaintenanceActionRequest &other);
    ApplyPendingMaintenanceActionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ApplyPendingMaintenanceActionRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
