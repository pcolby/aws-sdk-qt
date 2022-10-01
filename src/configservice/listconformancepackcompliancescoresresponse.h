// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONFORMANCEPACKCOMPLIANCESCORESRESPONSE_H
#define QTAWS_LISTCONFORMANCEPACKCOMPLIANCESCORESRESPONSE_H

#include "configserviceresponse.h"
#include "listconformancepackcompliancescoresrequest.h"

namespace QtAws {
namespace ConfigService {

class ListConformancePackComplianceScoresResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT ListConformancePackComplianceScoresResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    ListConformancePackComplianceScoresResponse(const ListConformancePackComplianceScoresRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListConformancePackComplianceScoresRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListConformancePackComplianceScoresResponse)
    Q_DISABLE_COPY(ListConformancePackComplianceScoresResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
