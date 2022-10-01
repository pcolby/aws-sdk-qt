// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSEGMENTREFERENCESRESPONSE_H
#define QTAWS_LISTSEGMENTREFERENCESRESPONSE_H

#include "evidentlyresponse.h"
#include "listsegmentreferencesrequest.h"

namespace QtAws {
namespace Evidently {

class ListSegmentReferencesResponsePrivate;

class QTAWSEVIDENTLY_EXPORT ListSegmentReferencesResponse : public EvidentlyResponse {
    Q_OBJECT

public:
    ListSegmentReferencesResponse(const ListSegmentReferencesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSegmentReferencesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSegmentReferencesResponse)
    Q_DISABLE_COPY(ListSegmentReferencesResponse)

};

} // namespace Evidently
} // namespace QtAws

#endif
