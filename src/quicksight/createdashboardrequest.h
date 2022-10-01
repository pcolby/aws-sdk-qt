// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDASHBOARDREQUEST_H
#define QTAWS_CREATEDASHBOARDREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class CreateDashboardRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT CreateDashboardRequest : public QuickSightRequest {

public:
    CreateDashboardRequest(const CreateDashboardRequest &other);
    CreateDashboardRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDashboardRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
