// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHREVOKEPERMISSIONSRESPONSE_H
#define QTAWS_BATCHREVOKEPERMISSIONSRESPONSE_H

#include "lakeformationresponse.h"
#include "batchrevokepermissionsrequest.h"

namespace QtAws {
namespace LakeFormation {

class BatchRevokePermissionsResponsePrivate;

class QTAWSLAKEFORMATION_EXPORT BatchRevokePermissionsResponse : public LakeFormationResponse {
    Q_OBJECT

public:
    BatchRevokePermissionsResponse(const BatchRevokePermissionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchRevokePermissionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchRevokePermissionsResponse)
    Q_DISABLE_COPY(BatchRevokePermissionsResponse)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
