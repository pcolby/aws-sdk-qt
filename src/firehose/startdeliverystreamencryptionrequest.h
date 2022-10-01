// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDELIVERYSTREAMENCRYPTIONREQUEST_H
#define QTAWS_STARTDELIVERYSTREAMENCRYPTIONREQUEST_H

#include "firehoserequest.h"

namespace QtAws {
namespace Firehose {

class StartDeliveryStreamEncryptionRequestPrivate;

class QTAWSFIREHOSE_EXPORT StartDeliveryStreamEncryptionRequest : public FirehoseRequest {

public:
    StartDeliveryStreamEncryptionRequest(const StartDeliveryStreamEncryptionRequest &other);
    StartDeliveryStreamEncryptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartDeliveryStreamEncryptionRequest)

};

} // namespace Firehose
} // namespace QtAws

#endif
