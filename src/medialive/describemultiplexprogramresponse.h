// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMULTIPLEXPROGRAMRESPONSE_H
#define QTAWS_DESCRIBEMULTIPLEXPROGRAMRESPONSE_H

#include "medialiveresponse.h"
#include "describemultiplexprogramrequest.h"

namespace QtAws {
namespace MediaLive {

class DescribeMultiplexProgramResponsePrivate;

class QTAWSMEDIALIVE_EXPORT DescribeMultiplexProgramResponse : public MediaLiveResponse {
    Q_OBJECT

public:
    DescribeMultiplexProgramResponse(const DescribeMultiplexProgramRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeMultiplexProgramRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMultiplexProgramResponse)
    Q_DISABLE_COPY(DescribeMultiplexProgramResponse)

};

} // namespace MediaLive
} // namespace QtAws

#endif
