// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPRESETSREQUEST_P_H
#define QTAWS_LISTPRESETSREQUEST_P_H

#include "elastictranscoderrequest_p.h"
#include "listpresetsrequest.h"

namespace QtAws {
namespace ElasticTranscoder {

class ListPresetsRequest;

class ListPresetsRequestPrivate : public ElasticTranscoderRequestPrivate {

public:
    ListPresetsRequestPrivate(const ElasticTranscoderRequest::Action action,
                                   ListPresetsRequest * const q);
    ListPresetsRequestPrivate(const ListPresetsRequestPrivate &other,
                                   ListPresetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPresetsRequest)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif
