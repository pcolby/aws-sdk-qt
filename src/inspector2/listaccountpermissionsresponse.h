// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTPERMISSIONSRESPONSE_H
#define QTAWS_LISTACCOUNTPERMISSIONSRESPONSE_H

#include "inspector2response.h"
#include "listaccountpermissionsrequest.h"

namespace QtAws {
namespace Inspector2 {

class ListAccountPermissionsResponsePrivate;

class QTAWSINSPECTOR2_EXPORT ListAccountPermissionsResponse : public Inspector2Response {
    Q_OBJECT

public:
    ListAccountPermissionsResponse(const ListAccountPermissionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAccountPermissionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAccountPermissionsResponse)
    Q_DISABLE_COPY(ListAccountPermissionsResponse)

};

} // namespace Inspector2
} // namespace QtAws

#endif
