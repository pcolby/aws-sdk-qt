// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOPTOUTLISTREQUEST_H
#define QTAWS_DELETEOPTOUTLISTREQUEST_H

#include "pinpointsmsvoicev2request.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DeleteOptOutListRequestPrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT DeleteOptOutListRequest : public PinpointSmsVoiceV2Request {

public:
    DeleteOptOutListRequest(const DeleteOptOutListRequest &other);
    DeleteOptOutListRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteOptOutListRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
