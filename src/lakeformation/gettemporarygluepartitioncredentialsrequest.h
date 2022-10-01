// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTEMPORARYGLUEPARTITIONCREDENTIALSREQUEST_H
#define QTAWS_GETTEMPORARYGLUEPARTITIONCREDENTIALSREQUEST_H

#include "lakeformationrequest.h"

namespace QtAws {
namespace LakeFormation {

class GetTemporaryGluePartitionCredentialsRequestPrivate;

class QTAWSLAKEFORMATION_EXPORT GetTemporaryGluePartitionCredentialsRequest : public LakeFormationRequest {

public:
    GetTemporaryGluePartitionCredentialsRequest(const GetTemporaryGluePartitionCredentialsRequest &other);
    GetTemporaryGluePartitionCredentialsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTemporaryGluePartitionCredentialsRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
