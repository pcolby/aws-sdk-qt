// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINPUTDEVICETRANSFERSREQUEST_H
#define QTAWS_LISTINPUTDEVICETRANSFERSREQUEST_H

#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class ListInputDeviceTransfersRequestPrivate;

class QTAWSMEDIALIVE_EXPORT ListInputDeviceTransfersRequest : public MediaLiveRequest {

public:
    ListInputDeviceTransfersRequest(const ListInputDeviceTransfersRequest &other);
    ListInputDeviceTransfersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListInputDeviceTransfersRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
