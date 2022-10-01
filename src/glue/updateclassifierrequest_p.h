// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECLASSIFIERREQUEST_P_H
#define QTAWS_UPDATECLASSIFIERREQUEST_P_H

#include "gluerequest_p.h"
#include "updateclassifierrequest.h"

namespace QtAws {
namespace Glue {

class UpdateClassifierRequest;

class UpdateClassifierRequestPrivate : public GlueRequestPrivate {

public:
    UpdateClassifierRequestPrivate(const GlueRequest::Action action,
                                   UpdateClassifierRequest * const q);
    UpdateClassifierRequestPrivate(const UpdateClassifierRequestPrivate &other,
                                   UpdateClassifierRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateClassifierRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
