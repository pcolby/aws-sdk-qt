// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOPTEDOUTNUMBERREQUEST_H
#define QTAWS_DELETEOPTEDOUTNUMBERREQUEST_H

#include "pinpointsmsvoicev2request.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DeleteOptedOutNumberRequestPrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT DeleteOptedOutNumberRequest : public PinpointSmsVoiceV2Request {

public:
    DeleteOptedOutNumberRequest(const DeleteOptedOutNumberRequest &other);
    DeleteOptedOutNumberRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteOptedOutNumberRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
