// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETENTRIESRESPONSE_H
#define QTAWS_LISTDATASETENTRIESRESPONSE_H

#include "lookoutvisionresponse.h"
#include "listdatasetentriesrequest.h"

namespace QtAws {
namespace LookoutVision {

class ListDatasetEntriesResponsePrivate;

class QTAWSLOOKOUTVISION_EXPORT ListDatasetEntriesResponse : public LookoutVisionResponse {
    Q_OBJECT

public:
    ListDatasetEntriesResponse(const ListDatasetEntriesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDatasetEntriesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDatasetEntriesResponse)
    Q_DISABLE_COPY(ListDatasetEntriesResponse)

};

} // namespace LookoutVision
} // namespace QtAws

#endif
