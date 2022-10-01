// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIMAGESREQUEST_H
#define QTAWS_GETIMAGESREQUEST_H

#include "kinesisvideoarchivedmediarequest.h"

namespace QtAws {
namespace KinesisVideoArchivedMedia {

class GetImagesRequestPrivate;

class QTAWSKINESISVIDEOARCHIVEDMEDIA_EXPORT GetImagesRequest : public KinesisVideoArchivedMediaRequest {

public:
    GetImagesRequest(const GetImagesRequest &other);
    GetImagesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetImagesRequest)

};

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws

#endif
