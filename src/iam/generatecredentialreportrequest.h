// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATECREDENTIALREPORTREQUEST_H
#define QTAWS_GENERATECREDENTIALREPORTREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class GenerateCredentialReportRequestPrivate;

class QTAWSIAM_EXPORT GenerateCredentialReportRequest : public IamRequest {

public:
    GenerateCredentialReportRequest(const GenerateCredentialReportRequest &other);
    GenerateCredentialReportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GenerateCredentialReportRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
