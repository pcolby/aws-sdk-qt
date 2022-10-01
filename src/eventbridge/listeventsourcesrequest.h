// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTSOURCESREQUEST_H
#define QTAWS_LISTEVENTSOURCESREQUEST_H

#include "eventbridgerequest.h"

namespace QtAws {
namespace EventBridge {

class ListEventSourcesRequestPrivate;

class QTAWSEVENTBRIDGE_EXPORT ListEventSourcesRequest : public EventBridgeRequest {

public:
    ListEventSourcesRequest(const ListEventSourcesRequest &other);
    ListEventSourcesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEventSourcesRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
