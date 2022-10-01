// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGEOMATCHSETREQUEST_P_H
#define QTAWS_CREATEGEOMATCHSETREQUEST_P_H

#include "wafrequest_p.h"
#include "creategeomatchsetrequest.h"

namespace QtAws {
namespace Waf {

class CreateGeoMatchSetRequest;

class CreateGeoMatchSetRequestPrivate : public WafRequestPrivate {

public:
    CreateGeoMatchSetRequestPrivate(const WafRequest::Action action,
                                   CreateGeoMatchSetRequest * const q);
    CreateGeoMatchSetRequestPrivate(const CreateGeoMatchSetRequestPrivate &other,
                                   CreateGeoMatchSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateGeoMatchSetRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
