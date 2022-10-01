// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSESSMENTTEMPLATESRESPONSE_H
#define QTAWS_LISTASSESSMENTTEMPLATESRESPONSE_H

#include "inspectorresponse.h"
#include "listassessmenttemplatesrequest.h"

namespace QtAws {
namespace Inspector {

class ListAssessmentTemplatesResponsePrivate;

class QTAWSINSPECTOR_EXPORT ListAssessmentTemplatesResponse : public InspectorResponse {
    Q_OBJECT

public:
    ListAssessmentTemplatesResponse(const ListAssessmentTemplatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAssessmentTemplatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssessmentTemplatesResponse)
    Q_DISABLE_COPY(ListAssessmentTemplatesResponse)

};

} // namespace Inspector
} // namespace QtAws

#endif
