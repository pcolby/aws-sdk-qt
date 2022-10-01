// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORLDGENERATIONJOBSREQUEST_H
#define QTAWS_LISTWORLDGENERATIONJOBSREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class ListWorldGenerationJobsRequestPrivate;

class QTAWSROBOMAKER_EXPORT ListWorldGenerationJobsRequest : public RoboMakerRequest {

public:
    ListWorldGenerationJobsRequest(const ListWorldGenerationJobsRequest &other);
    ListWorldGenerationJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWorldGenerationJobsRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
