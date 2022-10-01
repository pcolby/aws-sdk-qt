// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFEEDBACKRESPONSE_H
#define QTAWS_DESCRIBEFEEDBACKRESPONSE_H

#include "devopsgururesponse.h"
#include "describefeedbackrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class DescribeFeedbackResponsePrivate;

class QTAWSDEVOPSGURU_EXPORT DescribeFeedbackResponse : public DevOpsGuruResponse {
    Q_OBJECT

public:
    DescribeFeedbackResponse(const DescribeFeedbackRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFeedbackRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFeedbackResponse)
    Q_DISABLE_COPY(DescribeFeedbackResponse)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
