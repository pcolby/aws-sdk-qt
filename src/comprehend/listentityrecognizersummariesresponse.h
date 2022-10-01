// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENTITYRECOGNIZERSUMMARIESRESPONSE_H
#define QTAWS_LISTENTITYRECOGNIZERSUMMARIESRESPONSE_H

#include "comprehendresponse.h"
#include "listentityrecognizersummariesrequest.h"

namespace QtAws {
namespace Comprehend {

class ListEntityRecognizerSummariesResponsePrivate;

class QTAWSCOMPREHEND_EXPORT ListEntityRecognizerSummariesResponse : public ComprehendResponse {
    Q_OBJECT

public:
    ListEntityRecognizerSummariesResponse(const ListEntityRecognizerSummariesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListEntityRecognizerSummariesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEntityRecognizerSummariesResponse)
    Q_DISABLE_COPY(ListEntityRecognizerSummariesResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
