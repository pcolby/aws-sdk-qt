// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEORGANIZATIONSACCESSREPORTREQUEST_H
#define QTAWS_GENERATEORGANIZATIONSACCESSREPORTREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class GenerateOrganizationsAccessReportRequestPrivate;

class QTAWSIAM_EXPORT GenerateOrganizationsAccessReportRequest : public IamRequest {

public:
    GenerateOrganizationsAccessReportRequest(const GenerateOrganizationsAccessReportRequest &other);
    GenerateOrganizationsAccessReportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GenerateOrganizationsAccessReportRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
