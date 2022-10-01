// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECALLANALYTICSCATEGORYRESPONSE_H
#define QTAWS_UPDATECALLANALYTICSCATEGORYRESPONSE_H

#include "transcriberesponse.h"
#include "updatecallanalyticscategoryrequest.h"

namespace QtAws {
namespace Transcribe {

class UpdateCallAnalyticsCategoryResponsePrivate;

class QTAWSTRANSCRIBE_EXPORT UpdateCallAnalyticsCategoryResponse : public TranscribeResponse {
    Q_OBJECT

public:
    UpdateCallAnalyticsCategoryResponse(const UpdateCallAnalyticsCategoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateCallAnalyticsCategoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCallAnalyticsCategoryResponse)
    Q_DISABLE_COPY(UpdateCallAnalyticsCategoryResponse)

};

} // namespace Transcribe
} // namespace QtAws

#endif
