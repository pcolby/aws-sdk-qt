// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTFEEDBACKRESPONSE_H
#define QTAWS_PUTFEEDBACKRESPONSE_H

#include "devopsgururesponse.h"
#include "putfeedbackrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class PutFeedbackResponsePrivate;

class QTAWSDEVOPSGURU_EXPORT PutFeedbackResponse : public DevOpsGuruResponse {
    Q_OBJECT

public:
    PutFeedbackResponse(const PutFeedbackRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutFeedbackRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutFeedbackResponse)
    Q_DISABLE_COPY(PutFeedbackResponse)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
