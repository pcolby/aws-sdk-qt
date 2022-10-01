// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLOGPATTERNSREQUEST_H
#define QTAWS_LISTLOGPATTERNSREQUEST_H

#include "applicationinsightsrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class ListLogPatternsRequestPrivate;

class QTAWSAPPLICATIONINSIGHTS_EXPORT ListLogPatternsRequest : public ApplicationInsightsRequest {

public:
    ListLogPatternsRequest(const ListLogPatternsRequest &other);
    ListLogPatternsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLogPatternsRequest)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
