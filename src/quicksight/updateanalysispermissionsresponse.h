// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEANALYSISPERMISSIONSRESPONSE_H
#define QTAWS_UPDATEANALYSISPERMISSIONSRESPONSE_H

#include "quicksightresponse.h"
#include "updateanalysispermissionsrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateAnalysisPermissionsResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT UpdateAnalysisPermissionsResponse : public QuickSightResponse {
    Q_OBJECT

public:
    UpdateAnalysisPermissionsResponse(const UpdateAnalysisPermissionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAnalysisPermissionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAnalysisPermissionsResponse)
    Q_DISABLE_COPY(UpdateAnalysisPermissionsResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
