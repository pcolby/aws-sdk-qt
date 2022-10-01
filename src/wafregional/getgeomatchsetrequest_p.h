// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGEOMATCHSETREQUEST_P_H
#define QTAWS_GETGEOMATCHSETREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "getgeomatchsetrequest.h"

namespace QtAws {
namespace WafRegional {

class GetGeoMatchSetRequest;

class GetGeoMatchSetRequestPrivate : public WafRegionalRequestPrivate {

public:
    GetGeoMatchSetRequestPrivate(const WafRegionalRequest::Action action,
                                   GetGeoMatchSetRequest * const q);
    GetGeoMatchSetRequestPrivate(const GetGeoMatchSetRequestPrivate &other,
                                   GetGeoMatchSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetGeoMatchSetRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
