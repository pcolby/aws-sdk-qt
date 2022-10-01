// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOGPATTERNREQUEST_H
#define QTAWS_CREATELOGPATTERNREQUEST_H

#include "applicationinsightsrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class CreateLogPatternRequestPrivate;

class QTAWSAPPLICATIONINSIGHTS_EXPORT CreateLogPatternRequest : public ApplicationInsightsRequest {

public:
    CreateLogPatternRequest(const CreateLogPatternRequest &other);
    CreateLogPatternRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLogPatternRequest)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
