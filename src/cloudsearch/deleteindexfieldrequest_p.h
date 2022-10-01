// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINDEXFIELDREQUEST_P_H
#define QTAWS_DELETEINDEXFIELDREQUEST_P_H

#include "cloudsearchrequest_p.h"
#include "deleteindexfieldrequest.h"

namespace QtAws {
namespace CloudSearch {

class DeleteIndexFieldRequest;

class DeleteIndexFieldRequestPrivate : public CloudSearchRequestPrivate {

public:
    DeleteIndexFieldRequestPrivate(const CloudSearchRequest::Action action,
                                   DeleteIndexFieldRequest * const q);
    DeleteIndexFieldRequestPrivate(const DeleteIndexFieldRequestPrivate &other,
                                   DeleteIndexFieldRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteIndexFieldRequest)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
