// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSESSMENTRUNSRESPONSE_H
#define QTAWS_LISTASSESSMENTRUNSRESPONSE_H

#include "inspectorresponse.h"
#include "listassessmentrunsrequest.h"

namespace QtAws {
namespace Inspector {

class ListAssessmentRunsResponsePrivate;

class QTAWSINSPECTOR_EXPORT ListAssessmentRunsResponse : public InspectorResponse {
    Q_OBJECT

public:
    ListAssessmentRunsResponse(const ListAssessmentRunsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAssessmentRunsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssessmentRunsResponse)
    Q_DISABLE_COPY(ListAssessmentRunsResponse)

};

} // namespace Inspector
} // namespace QtAws

#endif
