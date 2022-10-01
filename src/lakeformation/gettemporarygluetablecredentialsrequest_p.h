// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTEMPORARYGLUETABLECREDENTIALSREQUEST_P_H
#define QTAWS_GETTEMPORARYGLUETABLECREDENTIALSREQUEST_P_H

#include "lakeformationrequest_p.h"
#include "gettemporarygluetablecredentialsrequest.h"

namespace QtAws {
namespace LakeFormation {

class GetTemporaryGlueTableCredentialsRequest;

class GetTemporaryGlueTableCredentialsRequestPrivate : public LakeFormationRequestPrivate {

public:
    GetTemporaryGlueTableCredentialsRequestPrivate(const LakeFormationRequest::Action action,
                                   GetTemporaryGlueTableCredentialsRequest * const q);
    GetTemporaryGlueTableCredentialsRequestPrivate(const GetTemporaryGlueTableCredentialsRequestPrivate &other,
                                   GetTemporaryGlueTableCredentialsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTemporaryGlueTableCredentialsRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
