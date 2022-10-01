// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPLAYSREQUEST_H
#define QTAWS_LISTREPLAYSREQUEST_H

#include "eventbridgerequest.h"

namespace QtAws {
namespace EventBridge {

class ListReplaysRequestPrivate;

class QTAWSEVENTBRIDGE_EXPORT ListReplaysRequest : public EventBridgeRequest {

public:
    ListReplaysRequest(const ListReplaysRequest &other);
    ListReplaysRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListReplaysRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
