// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERSETTINGSRESPONSE_H
#define QTAWS_UPDATEUSERSETTINGSRESPONSE_H

#include "chimeresponse.h"
#include "updateusersettingsrequest.h"

namespace QtAws {
namespace Chime {

class UpdateUserSettingsResponsePrivate;

class QTAWSCHIME_EXPORT UpdateUserSettingsResponse : public ChimeResponse {
    Q_OBJECT

public:
    UpdateUserSettingsResponse(const UpdateUserSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateUserSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateUserSettingsResponse)
    Q_DISABLE_COPY(UpdateUserSettingsResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
