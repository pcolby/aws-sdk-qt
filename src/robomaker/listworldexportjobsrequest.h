// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORLDEXPORTJOBSREQUEST_H
#define QTAWS_LISTWORLDEXPORTJOBSREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class ListWorldExportJobsRequestPrivate;

class QTAWSROBOMAKER_EXPORT ListWorldExportJobsRequest : public RoboMakerRequest {

public:
    ListWorldExportJobsRequest(const ListWorldExportJobsRequest &other);
    ListWorldExportJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWorldExportJobsRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
