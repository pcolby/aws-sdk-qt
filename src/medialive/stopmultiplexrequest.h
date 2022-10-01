// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPMULTIPLEXREQUEST_H
#define QTAWS_STOPMULTIPLEXREQUEST_H

#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class StopMultiplexRequestPrivate;

class QTAWSMEDIALIVE_EXPORT StopMultiplexRequest : public MediaLiveRequest {

public:
    StopMultiplexRequest(const StopMultiplexRequest &other);
    StopMultiplexRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopMultiplexRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
