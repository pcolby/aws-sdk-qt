// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTSETTINGSRESPONSE_H
#define QTAWS_GETACCOUNTSETTINGSRESPONSE_H

#include "protonresponse.h"
#include "getaccountsettingsrequest.h"

namespace QtAws {
namespace Proton {

class GetAccountSettingsResponsePrivate;

class QTAWSPROTON_EXPORT GetAccountSettingsResponse : public ProtonResponse {
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

} // namespace Proton
} // namespace QtAws

#endif
