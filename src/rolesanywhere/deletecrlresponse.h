// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECRLRESPONSE_H
#define QTAWS_DELETECRLRESPONSE_H

#include "rolesanywhereresponse.h"
#include "deletecrlrequest.h"

namespace QtAws {
namespace RolesAnywhere {

class DeleteCrlResponsePrivate;

class QTAWSROLESANYWHERE_EXPORT DeleteCrlResponse : public RolesAnywhereResponse {
    Q_OBJECT

public:
    DeleteCrlResponse(const DeleteCrlRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCrlRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCrlResponse)
    Q_DISABLE_COPY(DeleteCrlResponse)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
