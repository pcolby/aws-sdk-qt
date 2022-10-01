// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECRLRESPONSE_H
#define QTAWS_UPDATECRLRESPONSE_H

#include "rolesanywhereresponse.h"
#include "updatecrlrequest.h"

namespace QtAws {
namespace RolesAnywhere {

class UpdateCrlResponsePrivate;

class QTAWSROLESANYWHERE_EXPORT UpdateCrlResponse : public RolesAnywhereResponse {
    Q_OBJECT

public:
    UpdateCrlResponse(const UpdateCrlRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateCrlRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCrlResponse)
    Q_DISABLE_COPY(UpdateCrlResponse)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
