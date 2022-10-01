// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFRAUDSTERREQUEST_H
#define QTAWS_DESCRIBEFRAUDSTERREQUEST_H

#include "voiceidrequest.h"

namespace QtAws {
namespace VoiceId {

class DescribeFraudsterRequestPrivate;

class QTAWSVOICEID_EXPORT DescribeFraudsterRequest : public VoiceIdRequest {

public:
    DescribeFraudsterRequest(const DescribeFraudsterRequest &other);
    DescribeFraudsterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFraudsterRequest)

};

} // namespace VoiceId
} // namespace QtAws

#endif
