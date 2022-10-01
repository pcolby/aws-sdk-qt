// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETENTRIESRESPONSE_H
#define QTAWS_LISTDATASETENTRIESRESPONSE_H

#include "rekognitionresponse.h"
#include "listdatasetentriesrequest.h"

namespace QtAws {
namespace Rekognition {

class ListDatasetEntriesResponsePrivate;

class QTAWSREKOGNITION_EXPORT ListDatasetEntriesResponse : public RekognitionResponse {
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

} // namespace Rekognition
} // namespace QtAws

#endif
