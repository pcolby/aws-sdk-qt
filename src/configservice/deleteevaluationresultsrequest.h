// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVALUATIONRESULTSREQUEST_H
#define QTAWS_DELETEEVALUATIONRESULTSREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class DeleteEvaluationResultsRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT DeleteEvaluationResultsRequest : public ConfigServiceRequest {

public:
    DeleteEvaluationResultsRequest(const DeleteEvaluationResultsRequest &other);
    DeleteEvaluationResultsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEvaluationResultsRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
