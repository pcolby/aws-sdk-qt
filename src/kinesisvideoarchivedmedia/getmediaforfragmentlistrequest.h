// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMEDIAFORFRAGMENTLISTREQUEST_H
#define QTAWS_GETMEDIAFORFRAGMENTLISTREQUEST_H

#include "kinesisvideoarchivedmediarequest.h"

namespace QtAws {
namespace KinesisVideoArchivedMedia {

class GetMediaForFragmentListRequestPrivate;

class QTAWSKINESISVIDEOARCHIVEDMEDIA_EXPORT GetMediaForFragmentListRequest : public KinesisVideoArchivedMediaRequest {

public:
    GetMediaForFragmentListRequest(const GetMediaForFragmentListRequest &other);
    GetMediaForFragmentListRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMediaForFragmentListRequest)

};

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws

#endif
