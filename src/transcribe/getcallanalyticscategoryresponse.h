// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCALLANALYTICSCATEGORYRESPONSE_H
#define QTAWS_GETCALLANALYTICSCATEGORYRESPONSE_H

#include "transcriberesponse.h"
#include "getcallanalyticscategoryrequest.h"

namespace QtAws {
namespace Transcribe {

class GetCallAnalyticsCategoryResponsePrivate;

class QTAWSTRANSCRIBE_EXPORT GetCallAnalyticsCategoryResponse : public TranscribeResponse {
    Q_OBJECT

public:
    GetCallAnalyticsCategoryResponse(const GetCallAnalyticsCategoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCallAnalyticsCategoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCallAnalyticsCategoryResponse)
    Q_DISABLE_COPY(GetCallAnalyticsCategoryResponse)

};

} // namespace Transcribe
} // namespace QtAws

#endif
