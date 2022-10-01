// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTEMPORARYGLUEPARTITIONCREDENTIALSREQUEST_P_H
#define QTAWS_GETTEMPORARYGLUEPARTITIONCREDENTIALSREQUEST_P_H

#include "lakeformationrequest_p.h"
#include "gettemporarygluepartitioncredentialsrequest.h"

namespace QtAws {
namespace LakeFormation {

class GetTemporaryGluePartitionCredentialsRequest;

class GetTemporaryGluePartitionCredentialsRequestPrivate : public LakeFormationRequestPrivate {

public:
    GetTemporaryGluePartitionCredentialsRequestPrivate(const LakeFormationRequest::Action action,
                                   GetTemporaryGluePartitionCredentialsRequest * const q);
    GetTemporaryGluePartitionCredentialsRequestPrivate(const GetTemporaryGluePartitionCredentialsRequestPrivate &other,
                                   GetTemporaryGluePartitionCredentialsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTemporaryGluePartitionCredentialsRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
