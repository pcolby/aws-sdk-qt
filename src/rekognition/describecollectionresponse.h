// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOLLECTIONRESPONSE_H
#define QTAWS_DESCRIBECOLLECTIONRESPONSE_H

#include "rekognitionresponse.h"
#include "describecollectionrequest.h"

namespace QtAws {
namespace Rekognition {

class DescribeCollectionResponsePrivate;

class QTAWSREKOGNITION_EXPORT DescribeCollectionResponse : public RekognitionResponse {
    Q_OBJECT

public:
    DescribeCollectionResponse(const DescribeCollectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCollectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCollectionResponse)
    Q_DISABLE_COPY(DescribeCollectionResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif
