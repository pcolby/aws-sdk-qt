// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEOPTOUTLISTREQUEST_H
#define QTAWS_CREATEOPTOUTLISTREQUEST_H

#include "pinpointsmsvoicev2request.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class CreateOptOutListRequestPrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT CreateOptOutListRequest : public PinpointSmsVoiceV2Request {

public:
    CreateOptOutListRequest(const CreateOptOutListRequest &other);
    CreateOptOutListRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateOptOutListRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
