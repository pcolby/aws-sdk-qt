// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPDELIVERYSTREAMENCRYPTIONREQUEST_H
#define QTAWS_STOPDELIVERYSTREAMENCRYPTIONREQUEST_H

#include "firehoserequest.h"

namespace QtAws {
namespace Firehose {

class StopDeliveryStreamEncryptionRequestPrivate;

class QTAWSFIREHOSE_EXPORT StopDeliveryStreamEncryptionRequest : public FirehoseRequest {

public:
    StopDeliveryStreamEncryptionRequest(const StopDeliveryStreamEncryptionRequest &other);
    StopDeliveryStreamEncryptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopDeliveryStreamEncryptionRequest)

};

} // namespace Firehose
} // namespace QtAws

#endif
