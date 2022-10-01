// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTKEYWORDREQUEST_H
#define QTAWS_PUTKEYWORDREQUEST_H

#include "pinpointsmsvoicev2request.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class PutKeywordRequestPrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT PutKeywordRequest : public PinpointSmsVoiceV2Request {

public:
    PutKeywordRequest(const PutKeywordRequest &other);
    PutKeywordRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutKeywordRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
