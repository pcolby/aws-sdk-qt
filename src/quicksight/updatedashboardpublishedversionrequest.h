// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDASHBOARDPUBLISHEDVERSIONREQUEST_H
#define QTAWS_UPDATEDASHBOARDPUBLISHEDVERSIONREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateDashboardPublishedVersionRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT UpdateDashboardPublishedVersionRequest : public QuickSightRequest {

public:
    UpdateDashboardPublishedVersionRequest(const UpdateDashboardPublishedVersionRequest &other);
    UpdateDashboardPublishedVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDashboardPublishedVersionRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
