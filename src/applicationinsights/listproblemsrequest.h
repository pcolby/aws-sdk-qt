// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROBLEMSREQUEST_H
#define QTAWS_LISTPROBLEMSREQUEST_H

#include "applicationinsightsrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class ListProblemsRequestPrivate;

class QTAWSAPPLICATIONINSIGHTS_EXPORT ListProblemsRequest : public ApplicationInsightsRequest {

public:
    ListProblemsRequest(const ListProblemsRequest &other);
    ListProblemsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProblemsRequest)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
