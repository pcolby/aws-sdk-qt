// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWEBSITECERTIFICATEAUTHORITYRESPONSE_P_H
#define QTAWS_DESCRIBEWEBSITECERTIFICATEAUTHORITYRESPONSE_P_H

#include "worklinkresponse_p.h"

namespace QtAws {
namespace WorkLink {

class DescribeWebsiteCertificateAuthorityResponse;

class DescribeWebsiteCertificateAuthorityResponsePrivate : public WorkLinkResponsePrivate {

public:

    explicit DescribeWebsiteCertificateAuthorityResponsePrivate(DescribeWebsiteCertificateAuthorityResponse * const q);

    void parseDescribeWebsiteCertificateAuthorityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeWebsiteCertificateAuthorityResponse)
    Q_DISABLE_COPY(DescribeWebsiteCertificateAuthorityResponsePrivate)

};

} // namespace WorkLink
} // namespace QtAws

#endif
