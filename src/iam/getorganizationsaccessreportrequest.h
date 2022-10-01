// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETORGANIZATIONSACCESSREPORTREQUEST_H
#define QTAWS_GETORGANIZATIONSACCESSREPORTREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class GetOrganizationsAccessReportRequestPrivate;

class QTAWSIAM_EXPORT GetOrganizationsAccessReportRequest : public IamRequest {

public:
    GetOrganizationsAccessReportRequest(const GetOrganizationsAccessReportRequest &other);
    GetOrganizationsAccessReportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOrganizationsAccessReportRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
