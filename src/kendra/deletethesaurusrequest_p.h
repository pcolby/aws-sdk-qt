// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETHESAURUSREQUEST_P_H
#define QTAWS_DELETETHESAURUSREQUEST_P_H

#include "kendrarequest_p.h"
#include "deletethesaurusrequest.h"

namespace QtAws {
namespace Kendra {

class DeleteThesaurusRequest;

class DeleteThesaurusRequestPrivate : public KendraRequestPrivate {

public:
    DeleteThesaurusRequestPrivate(const KendraRequest::Action action,
                                   DeleteThesaurusRequest * const q);
    DeleteThesaurusRequestPrivate(const DeleteThesaurusRequestPrivate &other,
                                   DeleteThesaurusRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteThesaurusRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
