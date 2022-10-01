// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTREAMPROCESSORRESPONSE_H
#define QTAWS_DESCRIBESTREAMPROCESSORRESPONSE_H

#include "rekognitionresponse.h"
#include "describestreamprocessorrequest.h"

namespace QtAws {
namespace Rekognition {

class DescribeStreamProcessorResponsePrivate;

class QTAWSREKOGNITION_EXPORT DescribeStreamProcessorResponse : public RekognitionResponse {
    Q_OBJECT

public:
    DescribeStreamProcessorResponse(const DescribeStreamProcessorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeStreamProcessorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStreamProcessorResponse)
    Q_DISABLE_COPY(DescribeStreamProcessorResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif
