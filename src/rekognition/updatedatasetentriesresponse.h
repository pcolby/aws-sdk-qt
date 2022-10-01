// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATASETENTRIESRESPONSE_H
#define QTAWS_UPDATEDATASETENTRIESRESPONSE_H

#include "rekognitionresponse.h"
#include "updatedatasetentriesrequest.h"

namespace QtAws {
namespace Rekognition {

class UpdateDatasetEntriesResponsePrivate;

class QTAWSREKOGNITION_EXPORT UpdateDatasetEntriesResponse : public RekognitionResponse {
    Q_OBJECT

public:
    UpdateDatasetEntriesResponse(const UpdateDatasetEntriesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDatasetEntriesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDatasetEntriesResponse)
    Q_DISABLE_COPY(UpdateDatasetEntriesResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif
