// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSIMULATIONAPPLICATIONSREQUEST_H
#define QTAWS_LISTSIMULATIONAPPLICATIONSREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class ListSimulationApplicationsRequestPrivate;

class QTAWSROBOMAKER_EXPORT ListSimulationApplicationsRequest : public RoboMakerRequest {

public:
    ListSimulationApplicationsRequest(const ListSimulationApplicationsRequest &other);
    ListSimulationApplicationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSimulationApplicationsRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
