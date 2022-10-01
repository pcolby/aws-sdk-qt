// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTOPTEDOUTNUMBERREQUEST_H
#define QTAWS_PUTOPTEDOUTNUMBERREQUEST_H

#include "pinpointsmsvoicev2request.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class PutOptedOutNumberRequestPrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT PutOptedOutNumberRequest : public PinpointSmsVoiceV2Request {

public:
    PutOptedOutNumberRequest(const PutOptedOutNumberRequest &other);
    PutOptedOutNumberRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutOptedOutNumberRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
