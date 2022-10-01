// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOMPANYNETWORKCONFIGURATIONRESPONSE_H
#define QTAWS_DESCRIBECOMPANYNETWORKCONFIGURATIONRESPONSE_H

#include "worklinkresponse.h"
#include "describecompanynetworkconfigurationrequest.h"

namespace QtAws {
namespace WorkLink {

class DescribeCompanyNetworkConfigurationResponsePrivate;

class QTAWSWORKLINK_EXPORT DescribeCompanyNetworkConfigurationResponse : public WorkLinkResponse {
    Q_OBJECT

public:
    DescribeCompanyNetworkConfigurationResponse(const DescribeCompanyNetworkConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCompanyNetworkConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCompanyNetworkConfigurationResponse)
    Q_DISABLE_COPY(DescribeCompanyNetworkConfigurationResponse)

};

} // namespace WorkLink
} // namespace QtAws

#endif
