// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKUNITSRESPONSE_H
#define QTAWS_GETWORKUNITSRESPONSE_H

#include "lakeformationresponse.h"
#include "getworkunitsrequest.h"

namespace QtAws {
namespace LakeFormation {

class GetWorkUnitsResponsePrivate;

class QTAWSLAKEFORMATION_EXPORT GetWorkUnitsResponse : public LakeFormationResponse {
    Q_OBJECT

public:
    GetWorkUnitsResponse(const GetWorkUnitsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetWorkUnitsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWorkUnitsResponse)
    Q_DISABLE_COPY(GetWorkUnitsResponse)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
