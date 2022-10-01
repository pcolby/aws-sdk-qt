// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLECRLRESPONSE_H
#define QTAWS_ENABLECRLRESPONSE_H

#include "rolesanywhereresponse.h"
#include "enablecrlrequest.h"

namespace QtAws {
namespace RolesAnywhere {

class EnableCrlResponsePrivate;

class QTAWSROLESANYWHERE_EXPORT EnableCrlResponse : public RolesAnywhereResponse {
    Q_OBJECT

public:
    EnableCrlResponse(const EnableCrlRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableCrlRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableCrlResponse)
    Q_DISABLE_COPY(EnableCrlResponse)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
