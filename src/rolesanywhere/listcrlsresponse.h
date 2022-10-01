// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCRLSRESPONSE_H
#define QTAWS_LISTCRLSRESPONSE_H

#include "rolesanywhereresponse.h"
#include "listcrlsrequest.h"

namespace QtAws {
namespace RolesAnywhere {

class ListCrlsResponsePrivate;

class QTAWSROLESANYWHERE_EXPORT ListCrlsResponse : public RolesAnywhereResponse {
    Q_OBJECT

public:
    ListCrlsResponse(const ListCrlsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCrlsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCrlsResponse)
    Q_DISABLE_COPY(ListCrlsResponse)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
