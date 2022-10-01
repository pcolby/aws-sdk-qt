// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSAGEREPORTSUBSCRIPTIONREQUEST_H
#define QTAWS_CREATEUSAGEREPORTSUBSCRIPTIONREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class CreateUsageReportSubscriptionRequestPrivate;

class QTAWSAPPSTREAM_EXPORT CreateUsageReportSubscriptionRequest : public AppStreamRequest {

public:
    CreateUsageReportSubscriptionRequest(const CreateUsageReportSubscriptionRequest &other);
    CreateUsageReportSubscriptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateUsageReportSubscriptionRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
