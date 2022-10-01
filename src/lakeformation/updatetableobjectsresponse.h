// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETABLEOBJECTSRESPONSE_H
#define QTAWS_UPDATETABLEOBJECTSRESPONSE_H

#include "lakeformationresponse.h"
#include "updatetableobjectsrequest.h"

namespace QtAws {
namespace LakeFormation {

class UpdateTableObjectsResponsePrivate;

class QTAWSLAKEFORMATION_EXPORT UpdateTableObjectsResponse : public LakeFormationResponse {
    Q_OBJECT

public:
    UpdateTableObjectsResponse(const UpdateTableObjectsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateTableObjectsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTableObjectsResponse)
    Q_DISABLE_COPY(UpdateTableObjectsResponse)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
