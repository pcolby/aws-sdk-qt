// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOGPATTERNREQUEST_H
#define QTAWS_DELETELOGPATTERNREQUEST_H

#include "applicationinsightsrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class DeleteLogPatternRequestPrivate;

class QTAWSAPPLICATIONINSIGHTS_EXPORT DeleteLogPatternRequest : public ApplicationInsightsRequest {

public:
    DeleteLogPatternRequest(const DeleteLogPatternRequest &other);
    DeleteLogPatternRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLogPatternRequest)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
