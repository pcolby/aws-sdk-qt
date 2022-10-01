// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGSTREAMREQUEST_H
#define QTAWS_UNTAGSTREAMREQUEST_H

#include "kinesisvideorequest.h"

namespace QtAws {
namespace KinesisVideo {

class UntagStreamRequestPrivate;

class QTAWSKINESISVIDEO_EXPORT UntagStreamRequest : public KinesisVideoRequest {

public:
    UntagStreamRequest(const UntagStreamRequest &other);
    UntagStreamRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UntagStreamRequest)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
