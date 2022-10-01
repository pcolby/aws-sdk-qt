// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORDELIVERYSTREAMREQUEST_H
#define QTAWS_LISTTAGSFORDELIVERYSTREAMREQUEST_H

#include "firehoserequest.h"

namespace QtAws {
namespace Firehose {

class ListTagsForDeliveryStreamRequestPrivate;

class QTAWSFIREHOSE_EXPORT ListTagsForDeliveryStreamRequest : public FirehoseRequest {

public:
    ListTagsForDeliveryStreamRequest(const ListTagsForDeliveryStreamRequest &other);
    ListTagsForDeliveryStreamRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTagsForDeliveryStreamRequest)

};

} // namespace Firehose
} // namespace QtAws

#endif
