// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHREVOKEPERMISSIONSRESPONSE_P_H
#define QTAWS_BATCHREVOKEPERMISSIONSRESPONSE_P_H

#include "lakeformationresponse_p.h"

namespace QtAws {
namespace LakeFormation {

class BatchRevokePermissionsResponse;

class BatchRevokePermissionsResponsePrivate : public LakeFormationResponsePrivate {

public:

    explicit BatchRevokePermissionsResponsePrivate(BatchRevokePermissionsResponse * const q);

    void parseBatchRevokePermissionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchRevokePermissionsResponse)
    Q_DISABLE_COPY(BatchRevokePermissionsResponsePrivate)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
