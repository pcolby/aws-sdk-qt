// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPERMISSIONSRESPONSE_H
#define QTAWS_LISTPERMISSIONSRESPONSE_H

#include "lakeformationresponse.h"
#include "listpermissionsrequest.h"

namespace QtAws {
namespace LakeFormation {

class ListPermissionsResponsePrivate;

class QTAWSLAKEFORMATION_EXPORT ListPermissionsResponse : public LakeFormationResponse {
    Q_OBJECT

public:
    ListPermissionsResponse(const ListPermissionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPermissionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPermissionsResponse)
    Q_DISABLE_COPY(ListPermissionsResponse)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
