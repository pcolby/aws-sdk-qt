// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGLOBALSETTINGSRESPONSE_H
#define QTAWS_UPDATEGLOBALSETTINGSRESPONSE_H

#include "wellarchitectedresponse.h"
#include "updateglobalsettingsrequest.h"

namespace QtAws {
namespace WellArchitected {

class UpdateGlobalSettingsResponsePrivate;

class QTAWSWELLARCHITECTED_EXPORT UpdateGlobalSettingsResponse : public WellArchitectedResponse {
    Q_OBJECT

public:
    UpdateGlobalSettingsResponse(const UpdateGlobalSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateGlobalSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGlobalSettingsResponse)
    Q_DISABLE_COPY(UpdateGlobalSettingsResponse)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
