// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPLACEMENTSRESPONSE_H
#define QTAWS_LISTPLACEMENTSRESPONSE_H

#include "iot1clickprojectsresponse.h"
#include "listplacementsrequest.h"

namespace QtAws {
namespace IoT1ClickProjects {

class ListPlacementsResponsePrivate;

class QTAWSIOT1CLICKPROJECTS_EXPORT ListPlacementsResponse : public IoT1ClickProjectsResponse {
    Q_OBJECT

public:
    ListPlacementsResponse(const ListPlacementsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPlacementsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPlacementsResponse)
    Q_DISABLE_COPY(ListPlacementsResponse)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
