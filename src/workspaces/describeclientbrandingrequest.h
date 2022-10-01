// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLIENTBRANDINGREQUEST_H
#define QTAWS_DESCRIBECLIENTBRANDINGREQUEST_H

#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeClientBrandingRequestPrivate;

class QTAWSWORKSPACES_EXPORT DescribeClientBrandingRequest : public WorkSpacesRequest {

public:
    DescribeClientBrandingRequest(const DescribeClientBrandingRequest &other);
    DescribeClientBrandingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeClientBrandingRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
