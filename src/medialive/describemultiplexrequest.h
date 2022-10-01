// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMULTIPLEXREQUEST_H
#define QTAWS_DESCRIBEMULTIPLEXREQUEST_H

#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class DescribeMultiplexRequestPrivate;

class QTAWSMEDIALIVE_EXPORT DescribeMultiplexRequest : public MediaLiveRequest {

public:
    DescribeMultiplexRequest(const DescribeMultiplexRequest &other);
    DescribeMultiplexRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMultiplexRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
