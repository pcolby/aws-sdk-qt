// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDASHSTREAMINGSESSIONURLREQUEST_H
#define QTAWS_GETDASHSTREAMINGSESSIONURLREQUEST_H

#include "kinesisvideoarchivedmediarequest.h"

namespace QtAws {
namespace KinesisVideoArchivedMedia {

class GetDASHStreamingSessionURLRequestPrivate;

class QTAWSKINESISVIDEOARCHIVEDMEDIA_EXPORT GetDASHStreamingSessionURLRequest : public KinesisVideoArchivedMediaRequest {

public:
    GetDASHStreamingSessionURLRequest(const GetDASHStreamingSessionURLRequest &other);
    GetDASHStreamingSessionURLRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDASHStreamingSessionURLRequest)

};

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws

#endif
