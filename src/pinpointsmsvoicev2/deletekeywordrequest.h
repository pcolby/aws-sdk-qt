// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEKEYWORDREQUEST_H
#define QTAWS_DELETEKEYWORDREQUEST_H

#include "pinpointsmsvoicev2request.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DeleteKeywordRequestPrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT DeleteKeywordRequest : public PinpointSmsVoiceV2Request {

public:
    DeleteKeywordRequest(const DeleteKeywordRequest &other);
    DeleteKeywordRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteKeywordRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
