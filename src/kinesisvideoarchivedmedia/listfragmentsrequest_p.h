// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFRAGMENTSREQUEST_P_H
#define QTAWS_LISTFRAGMENTSREQUEST_P_H

#include "kinesisvideoarchivedmediarequest_p.h"
#include "listfragmentsrequest.h"

namespace QtAws {
namespace KinesisVideoArchivedMedia {

class ListFragmentsRequest;

class ListFragmentsRequestPrivate : public KinesisVideoArchivedMediaRequestPrivate {

public:
    ListFragmentsRequestPrivate(const KinesisVideoArchivedMediaRequest::Action action,
                                   ListFragmentsRequest * const q);
    ListFragmentsRequestPrivate(const ListFragmentsRequestPrivate &other,
                                   ListFragmentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFragmentsRequest)

};

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws

#endif
