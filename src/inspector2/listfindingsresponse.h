// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFINDINGSRESPONSE_H
#define QTAWS_LISTFINDINGSRESPONSE_H

#include "inspector2response.h"
#include "listfindingsrequest.h"

namespace QtAws {
namespace Inspector2 {

class ListFindingsResponsePrivate;

class QTAWSINSPECTOR2_EXPORT ListFindingsResponse : public Inspector2Response {
    Q_OBJECT

public:
    ListFindingsResponse(const ListFindingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFindingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFindingsResponse)
    Q_DISABLE_COPY(ListFindingsResponse)

};

} // namespace Inspector2
} // namespace QtAws

#endif
