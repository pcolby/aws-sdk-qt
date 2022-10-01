// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHINDEXREQUEST_P_H
#define QTAWS_SEARCHINDEXREQUEST_P_H

#include "iotrequest_p.h"
#include "searchindexrequest.h"

namespace QtAws {
namespace IoT {

class SearchIndexRequest;

class SearchIndexRequestPrivate : public IoTRequestPrivate {

public:
    SearchIndexRequestPrivate(const IoTRequest::Action action,
                                   SearchIndexRequest * const q);
    SearchIndexRequestPrivate(const SearchIndexRequestPrivate &other,
                                   SearchIndexRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchIndexRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
