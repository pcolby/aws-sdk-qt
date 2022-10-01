// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETPORTSETTINGSREQUEST_H
#define QTAWS_DESCRIBEFLEETPORTSETTINGSREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeFleetPortSettingsRequestPrivate;

class QTAWSGAMELIFT_EXPORT DescribeFleetPortSettingsRequest : public GameLiftRequest {

public:
    DescribeFleetPortSettingsRequest(const DescribeFleetPortSettingsRequest &other);
    DescribeFleetPortSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFleetPortSettingsRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
