// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVALUATIONRESULTSRESPONSE_H
#define QTAWS_DELETEEVALUATIONRESULTSRESPONSE_H

#include "configserviceresponse.h"
#include "deleteevaluationresultsrequest.h"

namespace QtAws {
namespace ConfigService {

class DeleteEvaluationResultsResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT DeleteEvaluationResultsResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    DeleteEvaluationResultsResponse(const DeleteEvaluationResultsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteEvaluationResultsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEvaluationResultsResponse)
    Q_DISABLE_COPY(DeleteEvaluationResultsResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
