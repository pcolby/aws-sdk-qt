// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTEMPORARYGLUETABLECREDENTIALSRESPONSE_H
#define QTAWS_GETTEMPORARYGLUETABLECREDENTIALSRESPONSE_H

#include "lakeformationresponse.h"
#include "gettemporarygluetablecredentialsrequest.h"

namespace QtAws {
namespace LakeFormation {

class GetTemporaryGlueTableCredentialsResponsePrivate;

class QTAWSLAKEFORMATION_EXPORT GetTemporaryGlueTableCredentialsResponse : public LakeFormationResponse {
    Q_OBJECT

public:
    GetTemporaryGlueTableCredentialsResponse(const GetTemporaryGlueTableCredentialsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTemporaryGlueTableCredentialsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTemporaryGlueTableCredentialsResponse)
    Q_DISABLE_COPY(GetTemporaryGlueTableCredentialsResponse)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
