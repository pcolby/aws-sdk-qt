// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINSTALLEDCOMPONENTSREQUEST_P_H
#define QTAWS_LISTINSTALLEDCOMPONENTSREQUEST_P_H

#include "greengrassv2request_p.h"
#include "listinstalledcomponentsrequest.h"

namespace QtAws {
namespace GreengrassV2 {

class ListInstalledComponentsRequest;

class ListInstalledComponentsRequestPrivate : public GreengrassV2RequestPrivate {

public:
    ListInstalledComponentsRequestPrivate(const GreengrassV2Request::Action action,
                                   ListInstalledComponentsRequest * const q);
    ListInstalledComponentsRequestPrivate(const ListInstalledComponentsRequestPrivate &other,
                                   ListInstalledComponentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListInstalledComponentsRequest)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
