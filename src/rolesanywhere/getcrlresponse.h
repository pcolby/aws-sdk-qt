// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCRLRESPONSE_H
#define QTAWS_GETCRLRESPONSE_H

#include "rolesanywhereresponse.h"
#include "getcrlrequest.h"

namespace QtAws {
namespace RolesAnywhere {

class GetCrlResponsePrivate;

class QTAWSROLESANYWHERE_EXPORT GetCrlResponse : public RolesAnywhereResponse {
    Q_OBJECT

public:
    GetCrlResponse(const GetCrlRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCrlRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCrlResponse)
    Q_DISABLE_COPY(GetCrlResponse)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
