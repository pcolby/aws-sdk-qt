// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHCHANNELSREQUEST_H
#define QTAWS_SEARCHCHANNELSREQUEST_H

#include "chimesdkmessagingrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class SearchChannelsRequestPrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT SearchChannelsRequest : public ChimeSdkMessagingRequest {

public:
    SearchChannelsRequest(const SearchChannelsRequest &other);
    SearchChannelsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchChannelsRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
