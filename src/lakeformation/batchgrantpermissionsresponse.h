// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGRANTPERMISSIONSRESPONSE_H
#define QTAWS_BATCHGRANTPERMISSIONSRESPONSE_H

#include "lakeformationresponse.h"
#include "batchgrantpermissionsrequest.h"

namespace QtAws {
namespace LakeFormation {

class BatchGrantPermissionsResponsePrivate;

class QTAWSLAKEFORMATION_EXPORT BatchGrantPermissionsResponse : public LakeFormationResponse {
    Q_OBJECT

public:
    BatchGrantPermissionsResponse(const BatchGrantPermissionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGrantPermissionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGrantPermissionsResponse)
    Q_DISABLE_COPY(BatchGrantPermissionsResponse)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
