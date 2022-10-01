// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICESREQUEST_P_H
#define QTAWS_LISTSERVICESREQUEST_P_H

#include "apprunnerrequest_p.h"
#include "listservicesrequest.h"

namespace QtAws {
namespace AppRunner {

class ListServicesRequest;

class ListServicesRequestPrivate : public AppRunnerRequestPrivate {

public:
    ListServicesRequestPrivate(const AppRunnerRequest::Action action,
                                   ListServicesRequest * const q);
    ListServicesRequestPrivate(const ListServicesRequestPrivate &other,
                                   ListServicesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListServicesRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif
