// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISTRIBUTEDATASETENTRIESRESPONSE_H
#define QTAWS_DISTRIBUTEDATASETENTRIESRESPONSE_H

#include "rekognitionresponse.h"
#include "distributedatasetentriesrequest.h"

namespace QtAws {
namespace Rekognition {

class DistributeDatasetEntriesResponsePrivate;

class QTAWSREKOGNITION_EXPORT DistributeDatasetEntriesResponse : public RekognitionResponse {
    Q_OBJECT

public:
    DistributeDatasetEntriesResponse(const DistributeDatasetEntriesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DistributeDatasetEntriesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DistributeDatasetEntriesResponse)
    Q_DISABLE_COPY(DistributeDatasetEntriesResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif
