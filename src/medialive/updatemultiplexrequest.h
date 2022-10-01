// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMULTIPLEXREQUEST_H
#define QTAWS_UPDATEMULTIPLEXREQUEST_H

#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class UpdateMultiplexRequestPrivate;

class QTAWSMEDIALIVE_EXPORT UpdateMultiplexRequest : public MediaLiveRequest {

public:
    UpdateMultiplexRequest(const UpdateMultiplexRequest &other);
    UpdateMultiplexRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMultiplexRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
