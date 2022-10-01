// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGRANTPERMISSIONSRESPONSE_P_H
#define QTAWS_BATCHGRANTPERMISSIONSRESPONSE_P_H

#include "lakeformationresponse_p.h"

namespace QtAws {
namespace LakeFormation {

class BatchGrantPermissionsResponse;

class BatchGrantPermissionsResponsePrivate : public LakeFormationResponsePrivate {

public:

    explicit BatchGrantPermissionsResponsePrivate(BatchGrantPermissionsResponse * const q);

    void parseBatchGrantPermissionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGrantPermissionsResponse)
    Q_DISABLE_COPY(BatchGrantPermissionsResponsePrivate)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
