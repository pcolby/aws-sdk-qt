// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCESHAREPERMISSIONSRESPONSE_H
#define QTAWS_LISTRESOURCESHAREPERMISSIONSRESPONSE_H

#include "ramresponse.h"
#include "listresourcesharepermissionsrequest.h"

namespace QtAws {
namespace Ram {

class ListResourceSharePermissionsResponsePrivate;

class QTAWSRAM_EXPORT ListResourceSharePermissionsResponse : public RamResponse {
    Q_OBJECT

public:
    ListResourceSharePermissionsResponse(const ListResourceSharePermissionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListResourceSharePermissionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResourceSharePermissionsResponse)
    Q_DISABLE_COPY(ListResourceSharePermissionsResponse)

};

} // namespace Ram
} // namespace QtAws

#endif
