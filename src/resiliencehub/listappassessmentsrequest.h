// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPASSESSMENTSREQUEST_H
#define QTAWS_LISTAPPASSESSMENTSREQUEST_H

#include "resiliencehubrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ListAppAssessmentsRequestPrivate;

class QTAWSRESILIENCEHUB_EXPORT ListAppAssessmentsRequest : public ResilienceHubRequest {

public:
    ListAppAssessmentsRequest(const ListAppAssessmentsRequest &other);
    ListAppAssessmentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAppAssessmentsRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
