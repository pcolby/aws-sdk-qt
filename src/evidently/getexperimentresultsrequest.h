// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXPERIMENTRESULTSREQUEST_H
#define QTAWS_GETEXPERIMENTRESULTSREQUEST_H

#include "evidentlyrequest.h"

namespace QtAws {
namespace Evidently {

class GetExperimentResultsRequestPrivate;

class QTAWSEVIDENTLY_EXPORT GetExperimentResultsRequest : public EvidentlyRequest {

public:
    GetExperimentResultsRequest(const GetExperimentResultsRequest &other);
    GetExperimentResultsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetExperimentResultsRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
