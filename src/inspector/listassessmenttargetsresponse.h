// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSESSMENTTARGETSRESPONSE_H
#define QTAWS_LISTASSESSMENTTARGETSRESPONSE_H

#include "inspectorresponse.h"
#include "listassessmenttargetsrequest.h"

namespace QtAws {
namespace Inspector {

class ListAssessmentTargetsResponsePrivate;

class QTAWSINSPECTOR_EXPORT ListAssessmentTargetsResponse : public InspectorResponse {
    Q_OBJECT

public:
    ListAssessmentTargetsResponse(const ListAssessmentTargetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAssessmentTargetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssessmentTargetsResponse)
    Q_DISABLE_COPY(ListAssessmentTargetsResponse)

};

} // namespace Inspector
} // namespace QtAws

#endif
