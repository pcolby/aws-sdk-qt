// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGSTREAMREQUEST_H
#define QTAWS_TAGSTREAMREQUEST_H

#include "kinesisvideorequest.h"

namespace QtAws {
namespace KinesisVideo {

class TagStreamRequestPrivate;

class QTAWSKINESISVIDEO_EXPORT TagStreamRequest : public KinesisVideoRequest {

public:
    TagStreamRequest(const TagStreamRequest &other);
    TagStreamRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TagStreamRequest)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
