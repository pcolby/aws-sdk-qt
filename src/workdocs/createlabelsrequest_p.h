// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELABELSREQUEST_P_H
#define QTAWS_CREATELABELSREQUEST_P_H

#include "workdocsrequest_p.h"
#include "createlabelsrequest.h"

namespace QtAws {
namespace WorkDocs {

class CreateLabelsRequest;

class CreateLabelsRequestPrivate : public WorkDocsRequestPrivate {

public:
    CreateLabelsRequestPrivate(const WorkDocsRequest::Action action,
                                   CreateLabelsRequest * const q);
    CreateLabelsRequestPrivate(const CreateLabelsRequestPrivate &other,
                                   CreateLabelsRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLabelsRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
