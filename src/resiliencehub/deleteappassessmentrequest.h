// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPASSESSMENTREQUEST_H
#define QTAWS_DELETEAPPASSESSMENTREQUEST_H

#include "resiliencehubrequest.h"

namespace QtAws {
namespace ResilienceHub {

class DeleteAppAssessmentRequestPrivate;

class QTAWSRESILIENCEHUB_EXPORT DeleteAppAssessmentRequest : public ResilienceHubRequest {

public:
    DeleteAppAssessmentRequest(const DeleteAppAssessmentRequest &other);
    DeleteAppAssessmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAppAssessmentRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
