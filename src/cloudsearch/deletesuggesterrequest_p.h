// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESUGGESTERREQUEST_P_H
#define QTAWS_DELETESUGGESTERREQUEST_P_H

#include "cloudsearchrequest_p.h"
#include "deletesuggesterrequest.h"

namespace QtAws {
namespace CloudSearch {

class DeleteSuggesterRequest;

class DeleteSuggesterRequestPrivate : public CloudSearchRequestPrivate {

public:
    DeleteSuggesterRequestPrivate(const CloudSearchRequest::Action action,
                                   DeleteSuggesterRequest * const q);
    DeleteSuggesterRequestPrivate(const DeleteSuggesterRequestPrivate &other,
                                   DeleteSuggesterRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSuggesterRequest)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
