// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETPORTSETTINGSRESPONSE_H
#define QTAWS_DESCRIBEFLEETPORTSETTINGSRESPONSE_H

#include "gameliftresponse.h"
#include "describefleetportsettingsrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeFleetPortSettingsResponsePrivate;

class QTAWSGAMELIFT_EXPORT DescribeFleetPortSettingsResponse : public GameLiftResponse {
    Q_OBJECT

public:
    DescribeFleetPortSettingsResponse(const DescribeFleetPortSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFleetPortSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFleetPortSettingsResponse)
    Q_DISABLE_COPY(DescribeFleetPortSettingsResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
