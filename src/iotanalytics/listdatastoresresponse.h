// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASTORESRESPONSE_H
#define QTAWS_LISTDATASTORESRESPONSE_H

#include "iotanalyticsresponse.h"
#include "listdatastoresrequest.h"

namespace QtAws {
namespace IoTAnalytics {

class ListDatastoresResponsePrivate;

class QTAWSIOTANALYTICS_EXPORT ListDatastoresResponse : public IoTAnalyticsResponse {
    Q_OBJECT

public:
    ListDatastoresResponse(const ListDatastoresRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDatastoresRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDatastoresResponse)
    Q_DISABLE_COPY(ListDatastoresResponse)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
