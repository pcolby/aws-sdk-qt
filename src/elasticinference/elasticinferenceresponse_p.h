// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ELASTICINFERENCERESPONSE_P_H
#define QTAWS_ELASTICINFERENCERESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace ElasticInference {

class ElasticInferenceResponse;

class ElasticInferenceResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit ElasticInferenceResponsePrivate(ElasticInferenceResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ElasticInferenceResponse)
    Q_DISABLE_COPY(ElasticInferenceResponsePrivate)

};

} // namespace ElasticInference
} // namespace QtAws

#endif
