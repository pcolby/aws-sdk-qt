// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDELIVERYSTREAMREQUEST_H
#define QTAWS_CREATEDELIVERYSTREAMREQUEST_H

#include "firehoserequest.h"

namespace QtAws {
namespace Firehose {

class CreateDeliveryStreamRequestPrivate;

class QTAWSFIREHOSE_EXPORT CreateDeliveryStreamRequest : public FirehoseRequest {

public:
    CreateDeliveryStreamRequest(const CreateDeliveryStreamRequest &other);
    CreateDeliveryStreamRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDeliveryStreamRequest)

};

} // namespace Firehose
} // namespace QtAws

#endif
