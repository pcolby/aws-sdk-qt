// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPERMISSIONVERSIONSRESPONSE_H
#define QTAWS_LISTPERMISSIONVERSIONSRESPONSE_H

#include "ramresponse.h"
#include "listpermissionversionsrequest.h"

namespace QtAws {
namespace Ram {

class ListPermissionVersionsResponsePrivate;

class QTAWSRAM_EXPORT ListPermissionVersionsResponse : public RamResponse {
    Q_OBJECT

public:
    ListPermissionVersionsResponse(const ListPermissionVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPermissionVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPermissionVersionsResponse)
    Q_DISABLE_COPY(ListPermissionVersionsResponse)

};

} // namespace Ram
} // namespace QtAws

#endif
