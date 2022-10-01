// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPOOLREQUEST_H
#define QTAWS_CREATEPOOLREQUEST_H

#include "pinpointsmsvoicev2request.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class CreatePoolRequestPrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT CreatePoolRequest : public PinpointSmsVoiceV2Request {

public:
    CreatePoolRequest(const CreatePoolRequest &other);
    CreatePoolRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePoolRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
