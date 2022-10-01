// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCALLANALYTICSCATEGORIESRESPONSE_H
#define QTAWS_LISTCALLANALYTICSCATEGORIESRESPONSE_H

#include "transcriberesponse.h"
#include "listcallanalyticscategoriesrequest.h"

namespace QtAws {
namespace Transcribe {

class ListCallAnalyticsCategoriesResponsePrivate;

class QTAWSTRANSCRIBE_EXPORT ListCallAnalyticsCategoriesResponse : public TranscribeResponse {
    Q_OBJECT

public:
    ListCallAnalyticsCategoriesResponse(const ListCallAnalyticsCategoriesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCallAnalyticsCategoriesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCallAnalyticsCategoriesResponse)
    Q_DISABLE_COPY(ListCallAnalyticsCategoriesResponse)

};

} // namespace Transcribe
} // namespace QtAws

#endif
