// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTREAMSREQUEST_H
#define QTAWS_LISTSTREAMSREQUEST_H

#include "kinesisvideorequest.h"

namespace QtAws {
namespace KinesisVideo {

class ListStreamsRequestPrivate;

class QTAWSKINESISVIDEO_EXPORT ListStreamsRequest : public KinesisVideoRequest {

public:
    ListStreamsRequest(const ListStreamsRequest &other);
    ListStreamsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStreamsRequest)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
