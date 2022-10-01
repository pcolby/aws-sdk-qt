// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFEATUREMETADATARESPONSE_H
#define QTAWS_UPDATEFEATUREMETADATARESPONSE_H

#include "sagemakerresponse.h"
#include "updatefeaturemetadatarequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateFeatureMetadataResponsePrivate;

class QTAWSSAGEMAKER_EXPORT UpdateFeatureMetadataResponse : public SageMakerResponse {
    Q_OBJECT

public:
    UpdateFeatureMetadataResponse(const UpdateFeatureMetadataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFeatureMetadataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFeatureMetadataResponse)
    Q_DISABLE_COPY(UpdateFeatureMetadataResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
