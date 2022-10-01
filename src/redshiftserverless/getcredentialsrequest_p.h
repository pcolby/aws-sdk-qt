// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCREDENTIALSREQUEST_P_H
#define QTAWS_GETCREDENTIALSREQUEST_P_H

#include "redshiftserverlessrequest_p.h"
#include "getcredentialsrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class GetCredentialsRequest;

class GetCredentialsRequestPrivate : public RedshiftServerlessRequestPrivate {

public:
    GetCredentialsRequestPrivate(const RedshiftServerlessRequest::Action action,
                                   GetCredentialsRequest * const q);
    GetCredentialsRequestPrivate(const GetCredentialsRequestPrivate &other,
                                   GetCredentialsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCredentialsRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
