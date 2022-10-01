// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLASSIFIERREQUEST_P_H
#define QTAWS_CREATECLASSIFIERREQUEST_P_H

#include "gluerequest_p.h"
#include "createclassifierrequest.h"

namespace QtAws {
namespace Glue {

class CreateClassifierRequest;

class CreateClassifierRequestPrivate : public GlueRequestPrivate {

public:
    CreateClassifierRequestPrivate(const GlueRequest::Action action,
                                   CreateClassifierRequest * const q);
    CreateClassifierRequestPrivate(const CreateClassifierRequestPrivate &other,
                                   CreateClassifierRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateClassifierRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
