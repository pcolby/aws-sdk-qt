// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEFINEINDEXFIELDREQUEST_P_H
#define QTAWS_DEFINEINDEXFIELDREQUEST_P_H

#include "cloudsearchrequest_p.h"
#include "defineindexfieldrequest.h"

namespace QtAws {
namespace CloudSearch {

class DefineIndexFieldRequest;

class DefineIndexFieldRequestPrivate : public CloudSearchRequestPrivate {

public:
    DefineIndexFieldRequestPrivate(const CloudSearchRequest::Action action,
                                   DefineIndexFieldRequest * const q);
    DefineIndexFieldRequestPrivate(const DefineIndexFieldRequestPrivate &other,
                                   DefineIndexFieldRequest * const q);

private:
    Q_DECLARE_PUBLIC(DefineIndexFieldRequest)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
