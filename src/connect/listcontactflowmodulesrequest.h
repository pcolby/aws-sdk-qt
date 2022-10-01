// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTACTFLOWMODULESREQUEST_H
#define QTAWS_LISTCONTACTFLOWMODULESREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class ListContactFlowModulesRequestPrivate;

class QTAWSCONNECT_EXPORT ListContactFlowModulesRequest : public ConnectRequest {

public:
    ListContactFlowModulesRequest(const ListContactFlowModulesRequest &other);
    ListContactFlowModulesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListContactFlowModulesRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
