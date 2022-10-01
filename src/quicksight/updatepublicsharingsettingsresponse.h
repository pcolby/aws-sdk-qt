// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPUBLICSHARINGSETTINGSRESPONSE_H
#define QTAWS_UPDATEPUBLICSHARINGSETTINGSRESPONSE_H

#include "quicksightresponse.h"
#include "updatepublicsharingsettingsrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdatePublicSharingSettingsResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT UpdatePublicSharingSettingsResponse : public QuickSightResponse {
    Q_OBJECT

public:
    UpdatePublicSharingSettingsResponse(const UpdatePublicSharingSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdatePublicSharingSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePublicSharingSettingsResponse)
    Q_DISABLE_COPY(UpdatePublicSharingSettingsResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
