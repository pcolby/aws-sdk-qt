// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATECREDENTIALREPORTREQUEST_P_H
#define QTAWS_GENERATECREDENTIALREPORTREQUEST_P_H

#include "iamrequest_p.h"
#include "generatecredentialreportrequest.h"

namespace QtAws {
namespace Iam {

class GenerateCredentialReportRequest;

class GenerateCredentialReportRequestPrivate : public IamRequestPrivate {

public:
    GenerateCredentialReportRequestPrivate(const IamRequest::Action action,
                                   GenerateCredentialReportRequest * const q);
    GenerateCredentialReportRequestPrivate(const GenerateCredentialReportRequestPrivate &other,
                                   GenerateCredentialReportRequest * const q);

private:
    Q_DECLARE_PUBLIC(GenerateCredentialReportRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
