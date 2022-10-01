// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPOOLREQUEST_H
#define QTAWS_DELETEPOOLREQUEST_H

#include "pinpointsmsvoicev2request.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DeletePoolRequestPrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT DeletePoolRequest : public PinpointSmsVoiceV2Request {

public:
    DeletePoolRequest(const DeletePoolRequest &other);
    DeletePoolRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePoolRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
