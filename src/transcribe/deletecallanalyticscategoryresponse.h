// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECALLANALYTICSCATEGORYRESPONSE_H
#define QTAWS_DELETECALLANALYTICSCATEGORYRESPONSE_H

#include "transcriberesponse.h"
#include "deletecallanalyticscategoryrequest.h"

namespace QtAws {
namespace Transcribe {

class DeleteCallAnalyticsCategoryResponsePrivate;

class QTAWSTRANSCRIBE_EXPORT DeleteCallAnalyticsCategoryResponse : public TranscribeResponse {
    Q_OBJECT

public:
    DeleteCallAnalyticsCategoryResponse(const DeleteCallAnalyticsCategoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCallAnalyticsCategoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCallAnalyticsCategoryResponse)
    Q_DISABLE_COPY(DeleteCallAnalyticsCategoryResponse)

};

} // namespace Transcribe
} // namespace QtAws

#endif
