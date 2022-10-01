// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROBOTAPPLICATIONSREQUEST_H
#define QTAWS_LISTROBOTAPPLICATIONSREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class ListRobotApplicationsRequestPrivate;

class QTAWSROBOMAKER_EXPORT ListRobotApplicationsRequest : public RoboMakerRequest {

public:
    ListRobotApplicationsRequest(const ListRobotApplicationsRequest &other);
    ListRobotApplicationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRobotApplicationsRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
