// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETREQUEST_H
#define QTAWS_DESCRIBEFLEETREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class DescribeFleetRequestPrivate;

class QTAWSROBOMAKER_EXPORT DescribeFleetRequest : public RoboMakerRequest {

public:
    DescribeFleetRequest(const DescribeFleetRequest &other);
    DescribeFleetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFleetRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
