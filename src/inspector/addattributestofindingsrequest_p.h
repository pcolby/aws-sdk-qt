// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDATTRIBUTESTOFINDINGSREQUEST_P_H
#define QTAWS_ADDATTRIBUTESTOFINDINGSREQUEST_P_H

#include "inspectorrequest_p.h"
#include "addattributestofindingsrequest.h"

namespace QtAws {
namespace Inspector {

class AddAttributesToFindingsRequest;

class AddAttributesToFindingsRequestPrivate : public InspectorRequestPrivate {

public:
    AddAttributesToFindingsRequestPrivate(const InspectorRequest::Action action,
                                   AddAttributesToFindingsRequest * const q);
    AddAttributesToFindingsRequestPrivate(const AddAttributesToFindingsRequestPrivate &other,
                                   AddAttributesToFindingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddAttributesToFindingsRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
