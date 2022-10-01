// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDELIVERYSTREAMSREQUEST_H
#define QTAWS_LISTDELIVERYSTREAMSREQUEST_H

#include "firehoserequest.h"

namespace QtAws {
namespace Firehose {

class ListDeliveryStreamsRequestPrivate;

class QTAWSFIREHOSE_EXPORT ListDeliveryStreamsRequest : public FirehoseRequest {

public:
    ListDeliveryStreamsRequest(const ListDeliveryStreamsRequest &other);
    ListDeliveryStreamsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDeliveryStreamsRequest)

};

} // namespace Firehose
} // namespace QtAws

#endif
