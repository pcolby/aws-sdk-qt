// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHINDEXRESPONSE_H
#define QTAWS_SEARCHINDEXRESPONSE_H

#include "iotresponse.h"
#include "searchindexrequest.h"

namespace QtAws {
namespace IoT {

class SearchIndexResponsePrivate;

class QTAWSIOT_EXPORT SearchIndexResponse : public IoTResponse {
    Q_OBJECT

public:
    SearchIndexResponse(const SearchIndexRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchIndexRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchIndexResponse)
    Q_DISABLE_COPY(SearchIndexResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
