// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFRAGMENTSREQUEST_H
#define QTAWS_LISTFRAGMENTSREQUEST_H

#include "kinesisvideoarchivedmediarequest.h"

namespace QtAws {
namespace KinesisVideoArchivedMedia {

class ListFragmentsRequestPrivate;

class QTAWSKINESISVIDEOARCHIVEDMEDIA_EXPORT ListFragmentsRequest : public KinesisVideoArchivedMediaRequest {

public:
    ListFragmentsRequest(const ListFragmentsRequest &other);
    ListFragmentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFragmentsRequest)

};

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws

#endif
