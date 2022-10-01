// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPIPELINESREQUEST_P_H
#define QTAWS_LISTPIPELINESREQUEST_P_H

#include "elastictranscoderrequest_p.h"
#include "listpipelinesrequest.h"

namespace QtAws {
namespace ElasticTranscoder {

class ListPipelinesRequest;

class ListPipelinesRequestPrivate : public ElasticTranscoderRequestPrivate {

public:
    ListPipelinesRequestPrivate(const ElasticTranscoderRequest::Action action,
                                   ListPipelinesRequest * const q);
    ListPipelinesRequestPrivate(const ListPipelinesRequestPrivate &other,
                                   ListPipelinesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPipelinesRequest)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif
