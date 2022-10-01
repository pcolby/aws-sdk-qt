// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDTAGSTOSTREAMREQUEST_P_H
#define QTAWS_ADDTAGSTOSTREAMREQUEST_P_H

#include "kinesisrequest_p.h"
#include "addtagstostreamrequest.h"

namespace QtAws {
namespace Kinesis {

class AddTagsToStreamRequest;

class AddTagsToStreamRequestPrivate : public KinesisRequestPrivate {

public:
    AddTagsToStreamRequestPrivate(const KinesisRequest::Action action,
                                   AddTagsToStreamRequest * const q);
    AddTagsToStreamRequestPrivate(const AddTagsToStreamRequestPrivate &other,
                                   AddTagsToStreamRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddTagsToStreamRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif
