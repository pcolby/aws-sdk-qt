// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ELASTICTRANSCODERRESPONSE_P_H
#define QTAWS_ELASTICTRANSCODERRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace ElasticTranscoder {

class ElasticTranscoderResponse;

class ElasticTranscoderResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit ElasticTranscoderResponsePrivate(ElasticTranscoderResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ElasticTranscoderResponse)
    Q_DISABLE_COPY(ElasticTranscoderResponsePrivate)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif
