// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROGRAMMATICACCESSCREDENTIALSREQUEST_P_H
#define QTAWS_GETPROGRAMMATICACCESSCREDENTIALSREQUEST_P_H

#include "finspacedatarequest_p.h"
#include "getprogrammaticaccesscredentialsrequest.h"

namespace QtAws {
namespace FinspaceData {

class GetProgrammaticAccessCredentialsRequest;

class GetProgrammaticAccessCredentialsRequestPrivate : public FinspaceDataRequestPrivate {

public:
    GetProgrammaticAccessCredentialsRequestPrivate(const FinspaceDataRequest::Action action,
                                   GetProgrammaticAccessCredentialsRequest * const q);
    GetProgrammaticAccessCredentialsRequestPrivate(const GetProgrammaticAccessCredentialsRequestPrivate &other,
                                   GetProgrammaticAccessCredentialsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetProgrammaticAccessCredentialsRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
