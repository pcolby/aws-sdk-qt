// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDASHBOARDPUBLISHEDVERSIONRESPONSE_H
#define QTAWS_UPDATEDASHBOARDPUBLISHEDVERSIONRESPONSE_H

#include "quicksightresponse.h"
#include "updatedashboardpublishedversionrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateDashboardPublishedVersionResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT UpdateDashboardPublishedVersionResponse : public QuickSightResponse {
    Q_OBJECT

public:
    UpdateDashboardPublishedVersionResponse(const UpdateDashboardPublishedVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDashboardPublishedVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDashboardPublishedVersionResponse)
    Q_DISABLE_COPY(UpdateDashboardPublishedVersionResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
