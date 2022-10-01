// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMULTIPLEXREQUEST_H
#define QTAWS_STARTMULTIPLEXREQUEST_H

#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class StartMultiplexRequestPrivate;

class QTAWSMEDIALIVE_EXPORT StartMultiplexRequest : public MediaLiveRequest {

public:
    StartMultiplexRequest(const StartMultiplexRequest &other);
    StartMultiplexRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartMultiplexRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
