// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEFAULTMESSAGETYPEREQUEST_H
#define QTAWS_DELETEDEFAULTMESSAGETYPEREQUEST_H

#include "pinpointsmsvoicev2request.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DeleteDefaultMessageTypeRequestPrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT DeleteDefaultMessageTypeRequest : public PinpointSmsVoiceV2Request {

public:
    DeleteDefaultMessageTypeRequest(const DeleteDefaultMessageTypeRequest &other);
    DeleteDefaultMessageTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDefaultMessageTypeRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
