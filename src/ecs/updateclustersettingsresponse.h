// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECLUSTERSETTINGSRESPONSE_H
#define QTAWS_UPDATECLUSTERSETTINGSRESPONSE_H

#include "ecsresponse.h"
#include "updateclustersettingsrequest.h"

namespace QtAws {
namespace Ecs {

class UpdateClusterSettingsResponsePrivate;

class QTAWSECS_EXPORT UpdateClusterSettingsResponse : public EcsResponse {
    Q_OBJECT

public:
    UpdateClusterSettingsResponse(const UpdateClusterSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateClusterSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateClusterSettingsResponse)
    Q_DISABLE_COPY(UpdateClusterSettingsResponse)

};

} // namespace Ecs
} // namespace QtAws

#endif
