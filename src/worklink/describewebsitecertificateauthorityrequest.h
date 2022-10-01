// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWEBSITECERTIFICATEAUTHORITYREQUEST_H
#define QTAWS_DESCRIBEWEBSITECERTIFICATEAUTHORITYREQUEST_H

#include "worklinkrequest.h"

namespace QtAws {
namespace WorkLink {

class DescribeWebsiteCertificateAuthorityRequestPrivate;

class QTAWSWORKLINK_EXPORT DescribeWebsiteCertificateAuthorityRequest : public WorkLinkRequest {

public:
    DescribeWebsiteCertificateAuthorityRequest(const DescribeWebsiteCertificateAuthorityRequest &other);
    DescribeWebsiteCertificateAuthorityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWebsiteCertificateAuthorityRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
