// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINBOUNDDMARCSETTINGSRESPONSE_H
#define QTAWS_DESCRIBEINBOUNDDMARCSETTINGSRESPONSE_H

#include "workmailresponse.h"
#include "describeinbounddmarcsettingsrequest.h"

namespace QtAws {
namespace WorkMail {

class DescribeInboundDmarcSettingsResponsePrivate;

class QTAWSWORKMAIL_EXPORT DescribeInboundDmarcSettingsResponse : public WorkMailResponse {
    Q_OBJECT

public:
    DescribeInboundDmarcSettingsResponse(const DescribeInboundDmarcSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeInboundDmarcSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInboundDmarcSettingsResponse)
    Q_DISABLE_COPY(DescribeInboundDmarcSettingsResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
