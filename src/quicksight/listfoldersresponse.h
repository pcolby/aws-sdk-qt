// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFOLDERSRESPONSE_H
#define QTAWS_LISTFOLDERSRESPONSE_H

#include "quicksightresponse.h"
#include "listfoldersrequest.h"

namespace QtAws {
namespace QuickSight {

class ListFoldersResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT ListFoldersResponse : public QuickSightResponse {
    Q_OBJECT

public:
    ListFoldersResponse(const ListFoldersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFoldersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFoldersResponse)
    Q_DISABLE_COPY(ListFoldersResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
