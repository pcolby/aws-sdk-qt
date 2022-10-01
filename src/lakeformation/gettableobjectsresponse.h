// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTABLEOBJECTSRESPONSE_H
#define QTAWS_GETTABLEOBJECTSRESPONSE_H

#include "lakeformationresponse.h"
#include "gettableobjectsrequest.h"

namespace QtAws {
namespace LakeFormation {

class GetTableObjectsResponsePrivate;

class QTAWSLAKEFORMATION_EXPORT GetTableObjectsResponse : public LakeFormationResponse {
    Q_OBJECT

public:
    GetTableObjectsResponse(const GetTableObjectsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTableObjectsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTableObjectsResponse)
    Q_DISABLE_COPY(GetTableObjectsResponse)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
