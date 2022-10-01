// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPHONENUMBERSETTINGSRESPONSE_H
#define QTAWS_GETPHONENUMBERSETTINGSRESPONSE_H

#include "chimeresponse.h"
#include "getphonenumbersettingsrequest.h"

namespace QtAws {
namespace Chime {

class GetPhoneNumberSettingsResponsePrivate;

class QTAWSCHIME_EXPORT GetPhoneNumberSettingsResponse : public ChimeResponse {
    Q_OBJECT

public:
    GetPhoneNumberSettingsResponse(const GetPhoneNumberSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPhoneNumberSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPhoneNumberSettingsResponse)
    Q_DISABLE_COPY(GetPhoneNumberSettingsResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
