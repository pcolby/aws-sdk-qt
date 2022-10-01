// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUICKCONNECTSREQUEST_H
#define QTAWS_LISTQUICKCONNECTSREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class ListQuickConnectsRequestPrivate;

class QTAWSCONNECT_EXPORT ListQuickConnectsRequest : public ConnectRequest {

public:
    ListQuickConnectsRequest(const ListQuickConnectsRequest &other);
    ListQuickConnectsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListQuickConnectsRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
