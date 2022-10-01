// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDASHBOARDREQUEST_H
#define QTAWS_DELETEDASHBOARDREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DeleteDashboardRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT DeleteDashboardRequest : public IoTSiteWiseRequest {

public:
    DeleteDashboardRequest(const DeleteDashboardRequest &other);
    DeleteDashboardRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDashboardRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
