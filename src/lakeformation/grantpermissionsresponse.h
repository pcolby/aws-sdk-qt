// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GRANTPERMISSIONSRESPONSE_H
#define QTAWS_GRANTPERMISSIONSRESPONSE_H

#include "lakeformationresponse.h"
#include "grantpermissionsrequest.h"

namespace QtAws {
namespace LakeFormation {

class GrantPermissionsResponsePrivate;

class QTAWSLAKEFORMATION_EXPORT GrantPermissionsResponse : public LakeFormationResponse {
    Q_OBJECT

public:
    GrantPermissionsResponse(const GrantPermissionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GrantPermissionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GrantPermissionsResponse)
    Q_DISABLE_COPY(GrantPermissionsResponse)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
