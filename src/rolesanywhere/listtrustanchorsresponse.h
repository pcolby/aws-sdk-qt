// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRUSTANCHORSRESPONSE_H
#define QTAWS_LISTTRUSTANCHORSRESPONSE_H

#include "rolesanywhereresponse.h"
#include "listtrustanchorsrequest.h"

namespace QtAws {
namespace RolesAnywhere {

class ListTrustAnchorsResponsePrivate;

class QTAWSROLESANYWHERE_EXPORT ListTrustAnchorsResponse : public RolesAnywhereResponse {
    Q_OBJECT

public:
    ListTrustAnchorsResponse(const ListTrustAnchorsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTrustAnchorsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTrustAnchorsResponse)
    Q_DISABLE_COPY(ListTrustAnchorsResponse)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
