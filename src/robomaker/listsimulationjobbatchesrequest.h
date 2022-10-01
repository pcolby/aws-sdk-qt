// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSIMULATIONJOBBATCHESREQUEST_H
#define QTAWS_LISTSIMULATIONJOBBATCHESREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class ListSimulationJobBatchesRequestPrivate;

class QTAWSROBOMAKER_EXPORT ListSimulationJobBatchesRequest : public RoboMakerRequest {

public:
    ListSimulationJobBatchesRequest(const ListSimulationJobBatchesRequest &other);
    ListSimulationJobBatchesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSimulationJobBatchesRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
