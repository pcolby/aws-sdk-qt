// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUEUEQUICKCONNECTSREQUEST_H
#define QTAWS_LISTQUEUEQUICKCONNECTSREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class ListQueueQuickConnectsRequestPrivate;

class QTAWSCONNECT_EXPORT ListQueueQuickConnectsRequest : public ConnectRequest {

public:
    ListQueueQuickConnectsRequest(const ListQueueQuickConnectsRequest &other);
    ListQueueQuickConnectsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListQueueQuickConnectsRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
