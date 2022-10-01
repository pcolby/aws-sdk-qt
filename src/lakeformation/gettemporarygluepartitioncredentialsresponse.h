// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTEMPORARYGLUEPARTITIONCREDENTIALSRESPONSE_H
#define QTAWS_GETTEMPORARYGLUEPARTITIONCREDENTIALSRESPONSE_H

#include "lakeformationresponse.h"
#include "gettemporarygluepartitioncredentialsrequest.h"

namespace QtAws {
namespace LakeFormation {

class GetTemporaryGluePartitionCredentialsResponsePrivate;

class QTAWSLAKEFORMATION_EXPORT GetTemporaryGluePartitionCredentialsResponse : public LakeFormationResponse {
    Q_OBJECT

public:
    GetTemporaryGluePartitionCredentialsResponse(const GetTemporaryGluePartitionCredentialsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTemporaryGluePartitionCredentialsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTemporaryGluePartitionCredentialsResponse)
    Q_DISABLE_COPY(GetTemporaryGluePartitionCredentialsResponse)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
