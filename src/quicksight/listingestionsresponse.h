// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINGESTIONSRESPONSE_H
#define QTAWS_LISTINGESTIONSRESPONSE_H

#include "quicksightresponse.h"
#include "listingestionsrequest.h"

namespace QtAws {
namespace QuickSight {

class ListIngestionsResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT ListIngestionsResponse : public QuickSightResponse {
    Q_OBJECT

public:
    ListIngestionsResponse(const ListIngestionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListIngestionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListIngestionsResponse)
    Q_DISABLE_COPY(ListIngestionsResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
