// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHDEVICESREQUEST_P_H
#define QTAWS_SEARCHDEVICESREQUEST_P_H

#include "braketrequest_p.h"
#include "searchdevicesrequest.h"

namespace QtAws {
namespace Braket {

class SearchDevicesRequest;

class SearchDevicesRequestPrivate : public BraketRequestPrivate {

public:
    SearchDevicesRequestPrivate(const BraketRequest::Action action,
                                   SearchDevicesRequest * const q);
    SearchDevicesRequestPrivate(const SearchDevicesRequestPrivate &other,
                                   SearchDevicesRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchDevicesRequest)

};

} // namespace Braket
} // namespace QtAws

#endif
