// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLECRLRESPONSE_H
#define QTAWS_DISABLECRLRESPONSE_H

#include "rolesanywhereresponse.h"
#include "disablecrlrequest.h"

namespace QtAws {
namespace RolesAnywhere {

class DisableCrlResponsePrivate;

class QTAWSROLESANYWHERE_EXPORT DisableCrlResponse : public RolesAnywhereResponse {
    Q_OBJECT

public:
    DisableCrlResponse(const DisableCrlRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableCrlRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableCrlResponse)
    Q_DISABLE_COPY(DisableCrlResponse)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
