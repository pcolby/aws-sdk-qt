// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBATCHINFERENCEJOBRESPONSE_P_H
#define QTAWS_DESCRIBEBATCHINFERENCEJOBRESPONSE_P_H

#include "personalizeresponse_p.h"

namespace QtAws {
namespace Personalize {

class DescribeBatchInferenceJobResponse;

class DescribeBatchInferenceJobResponsePrivate : public PersonalizeResponsePrivate {

public:

    explicit DescribeBatchInferenceJobResponsePrivate(DescribeBatchInferenceJobResponse * const q);

    void parseDescribeBatchInferenceJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeBatchInferenceJobResponse)
    Q_DISABLE_COPY(DescribeBatchInferenceJobResponsePrivate)

};

} // namespace Personalize
} // namespace QtAws

#endif
