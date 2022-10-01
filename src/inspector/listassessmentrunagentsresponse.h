// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSESSMENTRUNAGENTSRESPONSE_H
#define QTAWS_LISTASSESSMENTRUNAGENTSRESPONSE_H

#include "inspectorresponse.h"
#include "listassessmentrunagentsrequest.h"

namespace QtAws {
namespace Inspector {

class ListAssessmentRunAgentsResponsePrivate;

class QTAWSINSPECTOR_EXPORT ListAssessmentRunAgentsResponse : public InspectorResponse {
    Q_OBJECT

public:
    ListAssessmentRunAgentsResponse(const ListAssessmentRunAgentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAssessmentRunAgentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssessmentRunAgentsResponse)
    Q_DISABLE_COPY(ListAssessmentRunAgentsResponse)

};

} // namespace Inspector
} // namespace QtAws

#endif
