// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPOOLORIGINATIONIDENTITIESREQUEST_H
#define QTAWS_LISTPOOLORIGINATIONIDENTITIESREQUEST_H

#include "pinpointsmsvoicev2request.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class ListPoolOriginationIdentitiesRequestPrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT ListPoolOriginationIdentitiesRequest : public PinpointSmsVoiceV2Request {

public:
    ListPoolOriginationIdentitiesRequest(const ListPoolOriginationIdentitiesRequest &other);
    ListPoolOriginationIdentitiesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPoolOriginationIdentitiesRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
