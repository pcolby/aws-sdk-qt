// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDASHBOARDRESPONSE_H
#define QTAWS_UPDATEDASHBOARDRESPONSE_H

#include "quicksightresponse.h"
#include "updatedashboardrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateDashboardResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT UpdateDashboardResponse : public QuickSightResponse {
    Q_OBJECT

public:
    UpdateDashboardResponse(const UpdateDashboardRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDashboardRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDashboardResponse)
    Q_DISABLE_COPY(UpdateDashboardResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
