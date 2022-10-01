// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROBLEMREQUEST_H
#define QTAWS_DESCRIBEPROBLEMREQUEST_H

#include "applicationinsightsrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class DescribeProblemRequestPrivate;

class QTAWSAPPLICATIONINSIGHTS_EXPORT DescribeProblemRequest : public ApplicationInsightsRequest {

public:
    DescribeProblemRequest(const DescribeProblemRequest &other);
    DescribeProblemRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeProblemRequest)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
