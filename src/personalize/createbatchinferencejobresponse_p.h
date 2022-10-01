// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBATCHINFERENCEJOBRESPONSE_P_H
#define QTAWS_CREATEBATCHINFERENCEJOBRESPONSE_P_H

#include "personalizeresponse_p.h"

namespace QtAws {
namespace Personalize {

class CreateBatchInferenceJobResponse;

class CreateBatchInferenceJobResponsePrivate : public PersonalizeResponsePrivate {

public:

    explicit CreateBatchInferenceJobResponsePrivate(CreateBatchInferenceJobResponse * const q);

    void parseCreateBatchInferenceJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateBatchInferenceJobResponse)
    Q_DISABLE_COPY(CreateBatchInferenceJobResponsePrivate)

};

} // namespace Personalize
} // namespace QtAws

#endif
