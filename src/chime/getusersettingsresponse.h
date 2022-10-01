// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSERSETTINGSRESPONSE_H
#define QTAWS_GETUSERSETTINGSRESPONSE_H

#include "chimeresponse.h"
#include "getusersettingsrequest.h"

namespace QtAws {
namespace Chime {

class GetUserSettingsResponsePrivate;

class QTAWSCHIME_EXPORT GetUserSettingsResponse : public ChimeResponse {
    Q_OBJECT

public:
    GetUserSettingsResponse(const GetUserSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetUserSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUserSettingsResponse)
    Q_DISABLE_COPY(GetUserSettingsResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
