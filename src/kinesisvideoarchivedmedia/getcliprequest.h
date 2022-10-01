// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCLIPREQUEST_H
#define QTAWS_GETCLIPREQUEST_H

#include "kinesisvideoarchivedmediarequest.h"

namespace QtAws {
namespace KinesisVideoArchivedMedia {

class GetClipRequestPrivate;

class QTAWSKINESISVIDEOARCHIVEDMEDIA_EXPORT GetClipRequest : public KinesisVideoArchivedMediaRequest {

public:
    GetClipRequest(const GetClipRequest &other);
    GetClipRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetClipRequest)

};

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws

#endif
