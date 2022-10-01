// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAGENTSTATUSESREQUEST_H
#define QTAWS_LISTAGENTSTATUSESREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class ListAgentStatusesRequestPrivate;

class QTAWSCONNECT_EXPORT ListAgentStatusesRequest : public ConnectRequest {

public:
    ListAgentStatusesRequest(const ListAgentStatusesRequest &other);
    ListAgentStatusesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAgentStatusesRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
