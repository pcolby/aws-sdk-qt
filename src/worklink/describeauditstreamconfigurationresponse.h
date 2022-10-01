// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUDITSTREAMCONFIGURATIONRESPONSE_H
#define QTAWS_DESCRIBEAUDITSTREAMCONFIGURATIONRESPONSE_H

#include "worklinkresponse.h"
#include "describeauditstreamconfigurationrequest.h"

namespace QtAws {
namespace WorkLink {

class DescribeAuditStreamConfigurationResponsePrivate;

class QTAWSWORKLINK_EXPORT DescribeAuditStreamConfigurationResponse : public WorkLinkResponse {
    Q_OBJECT

public:
    DescribeAuditStreamConfigurationResponse(const DescribeAuditStreamConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAuditStreamConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAuditStreamConfigurationResponse)
    Q_DISABLE_COPY(DescribeAuditStreamConfigurationResponse)

};

} // namespace WorkLink
} // namespace QtAws

#endif
