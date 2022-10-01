// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUERYSTATERESPONSE_H
#define QTAWS_GETQUERYSTATERESPONSE_H

#include "lakeformationresponse.h"
#include "getquerystaterequest.h"

namespace QtAws {
namespace LakeFormation {

class GetQueryStateResponsePrivate;

class QTAWSLAKEFORMATION_EXPORT GetQueryStateResponse : public LakeFormationResponse {
    Q_OBJECT

public:
    GetQueryStateResponse(const GetQueryStateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetQueryStateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetQueryStateResponse)
    Q_DISABLE_COPY(GetQueryStateResponse)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
