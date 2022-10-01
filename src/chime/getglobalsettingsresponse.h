// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGLOBALSETTINGSRESPONSE_H
#define QTAWS_GETGLOBALSETTINGSRESPONSE_H

#include "chimeresponse.h"
#include "getglobalsettingsrequest.h"

namespace QtAws {
namespace Chime {

class GetGlobalSettingsResponsePrivate;

class QTAWSCHIME_EXPORT GetGlobalSettingsResponse : public ChimeResponse {
    Q_OBJECT

public:
    GetGlobalSettingsResponse(const GetGlobalSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetGlobalSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGlobalSettingsResponse)
    Q_DISABLE_COPY(GetGlobalSettingsResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
