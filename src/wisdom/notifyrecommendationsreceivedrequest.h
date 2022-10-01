// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NOTIFYRECOMMENDATIONSRECEIVEDREQUEST_H
#define QTAWS_NOTIFYRECOMMENDATIONSRECEIVEDREQUEST_H

#include "wisdomrequest.h"

namespace QtAws {
namespace Wisdom {

class NotifyRecommendationsReceivedRequestPrivate;

class QTAWSWISDOM_EXPORT NotifyRecommendationsReceivedRequest : public WisdomRequest {

public:
    NotifyRecommendationsReceivedRequest(const NotifyRecommendationsReceivedRequest &other);
    NotifyRecommendationsReceivedRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(NotifyRecommendationsReceivedRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
