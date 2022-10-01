// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWEBSITECERTIFICATEAUTHORITYREQUEST_P_H
#define QTAWS_DESCRIBEWEBSITECERTIFICATEAUTHORITYREQUEST_P_H

#include "worklinkrequest_p.h"
#include "describewebsitecertificateauthorityrequest.h"

namespace QtAws {
namespace WorkLink {

class DescribeWebsiteCertificateAuthorityRequest;

class DescribeWebsiteCertificateAuthorityRequestPrivate : public WorkLinkRequestPrivate {

public:
    DescribeWebsiteCertificateAuthorityRequestPrivate(const WorkLinkRequest::Action action,
                                   DescribeWebsiteCertificateAuthorityRequest * const q);
    DescribeWebsiteCertificateAuthorityRequestPrivate(const DescribeWebsiteCertificateAuthorityRequestPrivate &other,
                                   DescribeWebsiteCertificateAuthorityRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeWebsiteCertificateAuthorityRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
