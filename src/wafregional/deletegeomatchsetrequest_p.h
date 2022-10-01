// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGEOMATCHSETREQUEST_P_H
#define QTAWS_DELETEGEOMATCHSETREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "deletegeomatchsetrequest.h"

namespace QtAws {
namespace WafRegional {

class DeleteGeoMatchSetRequest;

class DeleteGeoMatchSetRequestPrivate : public WafRegionalRequestPrivate {

public:
    DeleteGeoMatchSetRequestPrivate(const WafRegionalRequest::Action action,
                                   DeleteGeoMatchSetRequest * const q);
    DeleteGeoMatchSetRequestPrivate(const DeleteGeoMatchSetRequestPrivate &other,
                                   DeleteGeoMatchSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteGeoMatchSetRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
