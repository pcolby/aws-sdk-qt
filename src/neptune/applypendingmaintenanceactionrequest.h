// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLYPENDINGMAINTENANCEACTIONREQUEST_H
#define QTAWS_APPLYPENDINGMAINTENANCEACTIONREQUEST_H

#include "neptunerequest.h"

namespace QtAws {
namespace Neptune {

class ApplyPendingMaintenanceActionRequestPrivate;

class QTAWSNEPTUNE_EXPORT ApplyPendingMaintenanceActionRequest : public NeptuneRequest {

public:
    ApplyPendingMaintenanceActionRequest(const ApplyPendingMaintenanceActionRequest &other);
    ApplyPendingMaintenanceActionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ApplyPendingMaintenanceActionRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
