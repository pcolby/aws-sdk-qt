// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTSETTINGSRESPONSE_H
#define QTAWS_GETACCOUNTSETTINGSRESPONSE_H

#include "chimeresponse.h"
#include "getaccountsettingsrequest.h"

namespace QtAws {
namespace Chime {

class GetAccountSettingsResponsePrivate;

class QTAWSCHIME_EXPORT GetAccountSettingsResponse : public ChimeResponse {
    Q_OBJECT

public:
    GetAccountSettingsResponse(const GetAccountSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAccountSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAccountSettingsResponse)
    Q_DISABLE_COPY(GetAccountSettingsResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
