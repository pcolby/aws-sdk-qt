// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMEDIAREQUEST_H
#define QTAWS_GETMEDIAREQUEST_H

#include "kinesisvideomediarequest.h"

namespace QtAws {
namespace KinesisVideoMedia {

class GetMediaRequestPrivate;

class QTAWSKINESISVIDEOMEDIA_EXPORT GetMediaRequest : public KinesisVideoMediaRequest {

public:
    GetMediaRequest(const GetMediaRequest &other);
    GetMediaRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMediaRequest)

};

} // namespace KinesisVideoMedia
} // namespace QtAws

#endif
