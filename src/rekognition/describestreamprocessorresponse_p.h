// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTREAMPROCESSORRESPONSE_P_H
#define QTAWS_DESCRIBESTREAMPROCESSORRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class DescribeStreamProcessorResponse;

class DescribeStreamProcessorResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit DescribeStreamProcessorResponsePrivate(DescribeStreamProcessorResponse * const q);

    void parseDescribeStreamProcessorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeStreamProcessorResponse)
    Q_DISABLE_COPY(DescribeStreamProcessorResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif
