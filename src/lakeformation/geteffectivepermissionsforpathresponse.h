// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEFFECTIVEPERMISSIONSFORPATHRESPONSE_H
#define QTAWS_GETEFFECTIVEPERMISSIONSFORPATHRESPONSE_H

#include "lakeformationresponse.h"
#include "geteffectivepermissionsforpathrequest.h"

namespace QtAws {
namespace LakeFormation {

class GetEffectivePermissionsForPathResponsePrivate;

class QTAWSLAKEFORMATION_EXPORT GetEffectivePermissionsForPathResponse : public LakeFormationResponse {
    Q_OBJECT

public:
    GetEffectivePermissionsForPathResponse(const GetEffectivePermissionsForPathRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEffectivePermissionsForPathRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEffectivePermissionsForPathResponse)
    Q_DISABLE_COPY(GetEffectivePermissionsForPathResponse)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
