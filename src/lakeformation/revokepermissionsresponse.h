// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKEPERMISSIONSRESPONSE_H
#define QTAWS_REVOKEPERMISSIONSRESPONSE_H

#include "lakeformationresponse.h"
#include "revokepermissionsrequest.h"

namespace QtAws {
namespace LakeFormation {

class RevokePermissionsResponsePrivate;

class QTAWSLAKEFORMATION_EXPORT RevokePermissionsResponse : public LakeFormationResponse {
    Q_OBJECT

public:
    RevokePermissionsResponse(const RevokePermissionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RevokePermissionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RevokePermissionsResponse)
    Q_DISABLE_COPY(RevokePermissionsResponse)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
