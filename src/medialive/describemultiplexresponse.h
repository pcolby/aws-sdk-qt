// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMULTIPLEXRESPONSE_H
#define QTAWS_DESCRIBEMULTIPLEXRESPONSE_H

#include "medialiveresponse.h"
#include "describemultiplexrequest.h"

namespace QtAws {
namespace MediaLive {

class DescribeMultiplexResponsePrivate;

class QTAWSMEDIALIVE_EXPORT DescribeMultiplexResponse : public MediaLiveResponse {
    Q_OBJECT

public:
    DescribeMultiplexResponse(const DescribeMultiplexRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeMultiplexRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMultiplexResponse)
    Q_DISABLE_COPY(DescribeMultiplexResponse)

};

} // namespace MediaLive
} // namespace QtAws

#endif
