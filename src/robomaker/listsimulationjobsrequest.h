// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSIMULATIONJOBSREQUEST_H
#define QTAWS_LISTSIMULATIONJOBSREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class ListSimulationJobsRequestPrivate;

class QTAWSROBOMAKER_EXPORT ListSimulationJobsRequest : public RoboMakerRequest {

public:
    ListSimulationJobsRequest(const ListSimulationJobsRequest &other);
    ListSimulationJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSimulationJobsRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
