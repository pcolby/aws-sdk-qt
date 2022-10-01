// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSTREAMENCRYPTIONREQUEST_H
#define QTAWS_STOPSTREAMENCRYPTIONREQUEST_H

#include "kinesisrequest.h"

namespace QtAws {
namespace Kinesis {

class StopStreamEncryptionRequestPrivate;

class QTAWSKINESIS_EXPORT StopStreamEncryptionRequest : public KinesisRequest {

public:
    StopStreamEncryptionRequest(const StopStreamEncryptionRequest &other);
    StopStreamEncryptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopStreamEncryptionRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif
