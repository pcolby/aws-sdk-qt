// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDASHBOARDREQUEST_H
#define QTAWS_UPDATEDASHBOARDREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class UpdateDashboardRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT UpdateDashboardRequest : public IoTSiteWiseRequest {

public:
    UpdateDashboardRequest(const UpdateDashboardRequest &other);
    UpdateDashboardRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDashboardRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
