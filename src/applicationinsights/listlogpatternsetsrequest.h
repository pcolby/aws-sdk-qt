// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLOGPATTERNSETSREQUEST_H
#define QTAWS_LISTLOGPATTERNSETSREQUEST_H

#include "applicationinsightsrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class ListLogPatternSetsRequestPrivate;

class QTAWSAPPLICATIONINSIGHTS_EXPORT ListLogPatternSetsRequest : public ApplicationInsightsRequest {

public:
    ListLogPatternSetsRequest(const ListLogPatternSetsRequest &other);
    ListLogPatternSetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLogPatternSetsRequest)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
