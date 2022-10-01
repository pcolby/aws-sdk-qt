// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRACKERRESPONSE_H
#define QTAWS_DESCRIBETRACKERRESPONSE_H

#include "locationresponse.h"
#include "describetrackerrequest.h"

namespace QtAws {
namespace Location {

class DescribeTrackerResponsePrivate;

class QTAWSLOCATION_EXPORT DescribeTrackerResponse : public LocationResponse {
    Q_OBJECT

public:
    DescribeTrackerResponse(const DescribeTrackerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTrackerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTrackerResponse)
    Q_DISABLE_COPY(DescribeTrackerResponse)

};

} // namespace Location
} // namespace QtAws

#endif
