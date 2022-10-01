// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGEOMATCHSETREQUEST_P_H
#define QTAWS_DELETEGEOMATCHSETREQUEST_P_H

#include "wafrequest_p.h"
#include "deletegeomatchsetrequest.h"

namespace QtAws {
namespace Waf {

class DeleteGeoMatchSetRequest;

class DeleteGeoMatchSetRequestPrivate : public WafRequestPrivate {

public:
    DeleteGeoMatchSetRequestPrivate(const WafRequest::Action action,
                                   DeleteGeoMatchSetRequest * const q);
    DeleteGeoMatchSetRequestPrivate(const DeleteGeoMatchSetRequestPrivate &other,
                                   DeleteGeoMatchSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteGeoMatchSetRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
