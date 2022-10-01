// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCREDENTIALREPORTREQUEST_P_H
#define QTAWS_GETCREDENTIALREPORTREQUEST_P_H

#include "iamrequest_p.h"
#include "getcredentialreportrequest.h"

namespace QtAws {
namespace Iam {

class GetCredentialReportRequest;

class GetCredentialReportRequestPrivate : public IamRequestPrivate {

public:
    GetCredentialReportRequestPrivate(const IamRequest::Action action,
                                   GetCredentialReportRequest * const q);
    GetCredentialReportRequestPrivate(const GetCredentialReportRequestPrivate &other,
                                   GetCredentialReportRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCredentialReportRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
