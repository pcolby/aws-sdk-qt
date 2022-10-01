// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBOTSREQUEST_H
#define QTAWS_LISTBOTSREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class ListBotsRequestPrivate;

class QTAWSCONNECT_EXPORT ListBotsRequest : public ConnectRequest {

public:
    ListBotsRequest(const ListBotsRequest &other);
    ListBotsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBotsRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
