// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINBOUNDDMARCSETTINGSREQUEST_H
#define QTAWS_DESCRIBEINBOUNDDMARCSETTINGSREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class DescribeInboundDmarcSettingsRequestPrivate;

class QTAWSWORKMAIL_EXPORT DescribeInboundDmarcSettingsRequest : public WorkMailRequest {

public:
    DescribeInboundDmarcSettingsRequest(const DescribeInboundDmarcSettingsRequest &other);
    DescribeInboundDmarcSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInboundDmarcSettingsRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
