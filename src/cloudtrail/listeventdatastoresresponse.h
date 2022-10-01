// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTDATASTORESRESPONSE_H
#define QTAWS_LISTEVENTDATASTORESRESPONSE_H

#include "cloudtrailresponse.h"
#include "listeventdatastoresrequest.h"

namespace QtAws {
namespace CloudTrail {

class ListEventDataStoresResponsePrivate;

class QTAWSCLOUDTRAIL_EXPORT ListEventDataStoresResponse : public CloudTrailResponse {
    Q_OBJECT

public:
    ListEventDataStoresResponse(const ListEventDataStoresRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListEventDataStoresRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEventDataStoresResponse)
    Q_DISABLE_COPY(ListEventDataStoresResponse)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
