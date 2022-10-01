// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECALLANALYTICSCATEGORYRESPONSE_H
#define QTAWS_CREATECALLANALYTICSCATEGORYRESPONSE_H

#include "transcriberesponse.h"
#include "createcallanalyticscategoryrequest.h"

namespace QtAws {
namespace Transcribe {

class CreateCallAnalyticsCategoryResponsePrivate;

class QTAWSTRANSCRIBE_EXPORT CreateCallAnalyticsCategoryResponse : public TranscribeResponse {
    Q_OBJECT

public:
    CreateCallAnalyticsCategoryResponse(const CreateCallAnalyticsCategoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCallAnalyticsCategoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCallAnalyticsCategoryResponse)
    Q_DISABLE_COPY(CreateCallAnalyticsCategoryResponse)

};

} // namespace Transcribe
} // namespace QtAws

#endif
