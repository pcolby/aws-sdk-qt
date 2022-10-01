// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOBSBYSTATUSREQUEST_P_H
#define QTAWS_LISTJOBSBYSTATUSREQUEST_P_H

#include "elastictranscoderrequest_p.h"
#include "listjobsbystatusrequest.h"

namespace QtAws {
namespace ElasticTranscoder {

class ListJobsByStatusRequest;

class ListJobsByStatusRequestPrivate : public ElasticTranscoderRequestPrivate {

public:
    ListJobsByStatusRequestPrivate(const ElasticTranscoderRequest::Action action,
                                   ListJobsByStatusRequest * const q);
    ListJobsByStatusRequestPrivate(const ListJobsByStatusRequestPrivate &other,
                                   ListJobsByStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListJobsByStatusRequest)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif
