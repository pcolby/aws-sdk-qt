// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHLSSTREAMINGSESSIONURLREQUEST_H
#define QTAWS_GETHLSSTREAMINGSESSIONURLREQUEST_H

#include "kinesisvideoarchivedmediarequest.h"

namespace QtAws {
namespace KinesisVideoArchivedMedia {

class GetHLSStreamingSessionURLRequestPrivate;

class QTAWSKINESISVIDEOARCHIVEDMEDIA_EXPORT GetHLSStreamingSessionURLRequest : public KinesisVideoArchivedMediaRequest {

public:
    GetHLSStreamingSessionURLRequest(const GetHLSStreamingSessionURLRequest &other);
    GetHLSStreamingSessionURLRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetHLSStreamingSessionURLRequest)

};

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws

#endif
