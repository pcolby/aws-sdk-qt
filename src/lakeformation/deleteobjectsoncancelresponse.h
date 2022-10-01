// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOBJECTSONCANCELRESPONSE_H
#define QTAWS_DELETEOBJECTSONCANCELRESPONSE_H

#include "lakeformationresponse.h"
#include "deleteobjectsoncancelrequest.h"

namespace QtAws {
namespace LakeFormation {

class DeleteObjectsOnCancelResponsePrivate;

class QTAWSLAKEFORMATION_EXPORT DeleteObjectsOnCancelResponse : public LakeFormationResponse {
    Q_OBJECT

public:
    DeleteObjectsOnCancelResponse(const DeleteObjectsOnCancelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteObjectsOnCancelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteObjectsOnCancelResponse)
    Q_DISABLE_COPY(DeleteObjectsOnCancelResponse)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
