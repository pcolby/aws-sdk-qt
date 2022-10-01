// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASETRESPONSE_H
#define QTAWS_CREATEDATASETRESPONSE_H

#include "rekognitionresponse.h"
#include "createdatasetrequest.h"

namespace QtAws {
namespace Rekognition {

class CreateDatasetResponsePrivate;

class QTAWSREKOGNITION_EXPORT CreateDatasetResponse : public RekognitionResponse {
    Q_OBJECT

public:
    CreateDatasetResponse(const CreateDatasetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDatasetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDatasetResponse)
    Q_DISABLE_COPY(CreateDatasetResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif
