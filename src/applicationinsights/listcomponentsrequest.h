// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPONENTSREQUEST_H
#define QTAWS_LISTCOMPONENTSREQUEST_H

#include "applicationinsightsrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class ListComponentsRequestPrivate;

class QTAWSAPPLICATIONINSIGHTS_EXPORT ListComponentsRequest : public ApplicationInsightsRequest {

public:
    ListComponentsRequest(const ListComponentsRequest &other);
    ListComponentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListComponentsRequest)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
