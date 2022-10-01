// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCOUNTSETTINGSRESPONSE_H
#define QTAWS_UPDATEACCOUNTSETTINGSRESPONSE_H

#include "protonresponse.h"
#include "updateaccountsettingsrequest.h"

namespace QtAws {
namespace Proton {

class UpdateAccountSettingsResponsePrivate;

class QTAWSPROTON_EXPORT UpdateAccountSettingsResponse : public ProtonResponse {
    Q_OBJECT

public:
    UpdateAccountSettingsResponse(const UpdateAccountSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAccountSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAccountSettingsResponse)
    Q_DISABLE_COPY(UpdateAccountSettingsResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
