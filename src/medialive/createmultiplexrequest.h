// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMULTIPLEXREQUEST_H
#define QTAWS_CREATEMULTIPLEXREQUEST_H

#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class CreateMultiplexRequestPrivate;

class QTAWSMEDIALIVE_EXPORT CreateMultiplexRequest : public MediaLiveRequest {

public:
    CreateMultiplexRequest(const CreateMultiplexRequest &other);
    CreateMultiplexRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMultiplexRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
