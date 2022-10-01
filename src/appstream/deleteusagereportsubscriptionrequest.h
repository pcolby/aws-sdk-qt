// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSAGEREPORTSUBSCRIPTIONREQUEST_H
#define QTAWS_DELETEUSAGEREPORTSUBSCRIPTIONREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class DeleteUsageReportSubscriptionRequestPrivate;

class QTAWSAPPSTREAM_EXPORT DeleteUsageReportSubscriptionRequest : public AppStreamRequest {

public:
    DeleteUsageReportSubscriptionRequest(const DeleteUsageReportSubscriptionRequest &other);
    DeleteUsageReportSubscriptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteUsageReportSubscriptionRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
