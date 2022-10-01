// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGEOMATCHSETREQUEST_P_H
#define QTAWS_UPDATEGEOMATCHSETREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "updategeomatchsetrequest.h"

namespace QtAws {
namespace WafRegional {

class UpdateGeoMatchSetRequest;

class UpdateGeoMatchSetRequestPrivate : public WafRegionalRequestPrivate {

public:
    UpdateGeoMatchSetRequestPrivate(const WafRegionalRequest::Action action,
                                   UpdateGeoMatchSetRequest * const q);
    UpdateGeoMatchSetRequestPrivate(const UpdateGeoMatchSetRequestPrivate &other,
                                   UpdateGeoMatchSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateGeoMatchSetRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
