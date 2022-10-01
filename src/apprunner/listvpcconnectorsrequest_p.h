// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVPCCONNECTORSREQUEST_P_H
#define QTAWS_LISTVPCCONNECTORSREQUEST_P_H

#include "apprunnerrequest_p.h"
#include "listvpcconnectorsrequest.h"

namespace QtAws {
namespace AppRunner {

class ListVpcConnectorsRequest;

class ListVpcConnectorsRequestPrivate : public AppRunnerRequestPrivate {

public:
    ListVpcConnectorsRequestPrivate(const AppRunnerRequest::Action action,
                                   ListVpcConnectorsRequest * const q);
    ListVpcConnectorsRequestPrivate(const ListVpcConnectorsRequestPrivate &other,
                                   ListVpcConnectorsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListVpcConnectorsRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif
