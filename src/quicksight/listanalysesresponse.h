// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTANALYSESRESPONSE_H
#define QTAWS_LISTANALYSESRESPONSE_H

#include "quicksightresponse.h"
#include "listanalysesrequest.h"

namespace QtAws {
namespace QuickSight {

class ListAnalysesResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT ListAnalysesResponse : public QuickSightResponse {
    Q_OBJECT

public:
    ListAnalysesResponse(const ListAnalysesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAnalysesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAnalysesResponse)
    Q_DISABLE_COPY(ListAnalysesResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
