// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROJECTSRESPONSE_H
#define QTAWS_LISTPROJECTSRESPONSE_H

#include "iotsitewiseresponse.h"
#include "listprojectsrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class ListProjectsResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT ListProjectsResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    ListProjectsResponse(const ListProjectsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListProjectsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProjectsResponse)
    Q_DISABLE_COPY(ListProjectsResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
