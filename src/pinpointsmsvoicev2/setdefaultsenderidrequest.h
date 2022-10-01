// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETDEFAULTSENDERIDREQUEST_H
#define QTAWS_SETDEFAULTSENDERIDREQUEST_H

#include "pinpointsmsvoicev2request.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class SetDefaultSenderIdRequestPrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT SetDefaultSenderIdRequest : public PinpointSmsVoiceV2Request {

public:
    SetDefaultSenderIdRequest(const SetDefaultSenderIdRequest &other);
    SetDefaultSenderIdRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetDefaultSenderIdRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
