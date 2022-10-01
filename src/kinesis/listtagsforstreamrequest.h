// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORSTREAMREQUEST_H
#define QTAWS_LISTTAGSFORSTREAMREQUEST_H

#include "kinesisrequest.h"

namespace QtAws {
namespace Kinesis {

class ListTagsForStreamRequestPrivate;

class QTAWSKINESIS_EXPORT ListTagsForStreamRequest : public KinesisRequest {

public:
    ListTagsForStreamRequest(const ListTagsForStreamRequest &other);
    ListTagsForStreamRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTagsForStreamRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif
