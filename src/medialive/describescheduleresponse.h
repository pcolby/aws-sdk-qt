// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCHEDULERESPONSE_H
#define QTAWS_DESCRIBESCHEDULERESPONSE_H

#include "medialiveresponse.h"
#include "describeschedulerequest.h"

namespace QtAws {
namespace MediaLive {

class DescribeScheduleResponsePrivate;

class QTAWSMEDIALIVE_EXPORT DescribeScheduleResponse : public MediaLiveResponse {
    Q_OBJECT

public:
    DescribeScheduleResponse(const DescribeScheduleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeScheduleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeScheduleResponse)
    Q_DISABLE_COPY(DescribeScheduleResponse)

};

} // namespace MediaLive
} // namespace QtAws

#endif
