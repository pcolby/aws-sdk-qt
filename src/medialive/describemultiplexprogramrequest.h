// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMULTIPLEXPROGRAMREQUEST_H
#define QTAWS_DESCRIBEMULTIPLEXPROGRAMREQUEST_H

#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class DescribeMultiplexProgramRequestPrivate;

class QTAWSMEDIALIVE_EXPORT DescribeMultiplexProgramRequest : public MediaLiveRequest {

public:
    DescribeMultiplexProgramRequest(const DescribeMultiplexProgramRequest &other);
    DescribeMultiplexProgramRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMultiplexProgramRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
