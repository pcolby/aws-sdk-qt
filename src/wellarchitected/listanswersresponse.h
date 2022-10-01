// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTANSWERSRESPONSE_H
#define QTAWS_LISTANSWERSRESPONSE_H

#include "wellarchitectedresponse.h"
#include "listanswersrequest.h"

namespace QtAws {
namespace WellArchitected {

class ListAnswersResponsePrivate;

class QTAWSWELLARCHITECTED_EXPORT ListAnswersResponse : public WellArchitectedResponse {
    Q_OBJECT

public:
    ListAnswersResponse(const ListAnswersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAnswersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAnswersResponse)
    Q_DISABLE_COPY(ListAnswersResponse)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
