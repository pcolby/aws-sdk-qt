// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINSIGHTRESPONSE_H
#define QTAWS_DELETEINSIGHTRESPONSE_H

#include "devopsgururesponse.h"
#include "deleteinsightrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class DeleteInsightResponsePrivate;

class QTAWSDEVOPSGURU_EXPORT DeleteInsightResponse : public DevOpsGuruResponse {
    Q_OBJECT

public:
    DeleteInsightResponse(const DeleteInsightRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteInsightRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteInsightResponse)
    Q_DISABLE_COPY(DeleteInsightResponse)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
