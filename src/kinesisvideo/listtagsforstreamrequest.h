// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORSTREAMREQUEST_H
#define QTAWS_LISTTAGSFORSTREAMREQUEST_H

#include "kinesisvideorequest.h"

namespace QtAws {
namespace KinesisVideo {

class ListTagsForStreamRequestPrivate;

class QTAWSKINESISVIDEO_EXPORT ListTagsForStreamRequest : public KinesisVideoRequest {

public:
    ListTagsForStreamRequest(const ListTagsForStreamRequest &other);
    ListTagsForStreamRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTagsForStreamRequest)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
