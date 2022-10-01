// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCLASSIFIERREQUEST_P_H
#define QTAWS_GETCLASSIFIERREQUEST_P_H

#include "gluerequest_p.h"
#include "getclassifierrequest.h"

namespace QtAws {
namespace Glue {

class GetClassifierRequest;

class GetClassifierRequestPrivate : public GlueRequestPrivate {

public:
    GetClassifierRequestPrivate(const GlueRequest::Action action,
                                   GetClassifierRequest * const q);
    GetClassifierRequestPrivate(const GetClassifierRequestPrivate &other,
                                   GetClassifierRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetClassifierRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
