// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWEBSITECERTIFICATEAUTHORITYRESPONSE_H
#define QTAWS_DESCRIBEWEBSITECERTIFICATEAUTHORITYRESPONSE_H

#include "worklinkresponse.h"
#include "describewebsitecertificateauthorityrequest.h"

namespace QtAws {
namespace WorkLink {

class DescribeWebsiteCertificateAuthorityResponsePrivate;

class QTAWSWORKLINK_EXPORT DescribeWebsiteCertificateAuthorityResponse : public WorkLinkResponse {
    Q_OBJECT

public:
    DescribeWebsiteCertificateAuthorityResponse(const DescribeWebsiteCertificateAuthorityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeWebsiteCertificateAuthorityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWebsiteCertificateAuthorityResponse)
    Q_DISABLE_COPY(DescribeWebsiteCertificateAuthorityResponse)

};

} // namespace WorkLink
} // namespace QtAws

#endif
