// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENTITYRECOGNIZERSRESPONSE_H
#define QTAWS_LISTENTITYRECOGNIZERSRESPONSE_H

#include "comprehendresponse.h"
#include "listentityrecognizersrequest.h"

namespace QtAws {
namespace Comprehend {

class ListEntityRecognizersResponsePrivate;

class QTAWSCOMPREHEND_EXPORT ListEntityRecognizersResponse : public ComprehendResponse {
    Q_OBJECT

public:
    ListEntityRecognizersResponse(const ListEntityRecognizersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListEntityRecognizersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEntityRecognizersResponse)
    Q_DISABLE_COPY(ListEntityRecognizersResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
