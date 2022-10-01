// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUBMITFEEDBACKRESPONSE_H
#define QTAWS_SUBMITFEEDBACKRESPONSE_H

#include "kendraresponse.h"
#include "submitfeedbackrequest.h"

namespace QtAws {
namespace Kendra {

class SubmitFeedbackResponsePrivate;

class QTAWSKENDRA_EXPORT SubmitFeedbackResponse : public KendraResponse {
    Q_OBJECT

public:
    SubmitFeedbackResponse(const SubmitFeedbackRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SubmitFeedbackRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SubmitFeedbackResponse)
    Q_DISABLE_COPY(SubmitFeedbackResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
