// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFINDINGSRESPONSE_H
#define QTAWS_LISTFINDINGSRESPONSE_H

#include "inspectorresponse.h"
#include "listfindingsrequest.h"

namespace QtAws {
namespace Inspector {

class ListFindingsResponsePrivate;

class QTAWSINSPECTOR_EXPORT ListFindingsResponse : public InspectorResponse {
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

} // namespace Inspector
} // namespace QtAws

#endif
