// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSEGMENTSRESPONSE_H
#define QTAWS_LISTSEGMENTSRESPONSE_H

#include "evidentlyresponse.h"
#include "listsegmentsrequest.h"

namespace QtAws {
namespace Evidently {

class ListSegmentsResponsePrivate;

class QTAWSEVIDENTLY_EXPORT ListSegmentsResponse : public EvidentlyResponse {
    Q_OBJECT

public:
    ListSegmentsResponse(const ListSegmentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSegmentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSegmentsResponse)
    Q_DISABLE_COPY(ListSegmentsResponse)

};

} // namespace Evidently
} // namespace QtAws

#endif
