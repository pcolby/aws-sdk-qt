// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRIGGERSREQUEST_P_H
#define QTAWS_GETTRIGGERSREQUEST_P_H

#include "gluerequest_p.h"
#include "gettriggersrequest.h"

namespace QtAws {
namespace Glue {

class GetTriggersRequest;

class GetTriggersRequestPrivate : public GlueRequestPrivate {

public:
    GetTriggersRequestPrivate(const GlueRequest::Action action,
                                   GetTriggersRequest * const q);
    GetTriggersRequestPrivate(const GetTriggersRequestPrivate &other,
                                   GetTriggersRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTriggersRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
