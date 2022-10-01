// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGDELIVERYSTREAMREQUEST_H
#define QTAWS_TAGDELIVERYSTREAMREQUEST_H

#include "firehoserequest.h"

namespace QtAws {
namespace Firehose {

class TagDeliveryStreamRequestPrivate;

class QTAWSFIREHOSE_EXPORT TagDeliveryStreamRequest : public FirehoseRequest {

public:
    TagDeliveryStreamRequest(const TagDeliveryStreamRequest &other);
    TagDeliveryStreamRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TagDeliveryStreamRequest)

};

} // namespace Firehose
} // namespace QtAws

#endif
