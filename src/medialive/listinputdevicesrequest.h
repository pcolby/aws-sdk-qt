// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINPUTDEVICESREQUEST_H
#define QTAWS_LISTINPUTDEVICESREQUEST_H

#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class ListInputDevicesRequestPrivate;

class QTAWSMEDIALIVE_EXPORT ListInputDevicesRequest : public MediaLiveRequest {

public:
    ListInputDevicesRequest(const ListInputDevicesRequest &other);
    ListInputDevicesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListInputDevicesRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
