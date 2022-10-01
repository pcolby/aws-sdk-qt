// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPHONENUMBERSETTINGSRESPONSE_H
#define QTAWS_UPDATEPHONENUMBERSETTINGSRESPONSE_H

#include "chimeresponse.h"
#include "updatephonenumbersettingsrequest.h"

namespace QtAws {
namespace Chime {

class UpdatePhoneNumberSettingsResponsePrivate;

class QTAWSCHIME_EXPORT UpdatePhoneNumberSettingsResponse : public ChimeResponse {
    Q_OBJECT

public:
    UpdatePhoneNumberSettingsResponse(const UpdatePhoneNumberSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdatePhoneNumberSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePhoneNumberSettingsResponse)
    Q_DISABLE_COPY(UpdatePhoneNumberSettingsResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
