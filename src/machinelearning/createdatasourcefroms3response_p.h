// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASOURCEFROMS3RESPONSE_P_H
#define QTAWS_CREATEDATASOURCEFROMS3RESPONSE_P_H

#include "machinelearningresponse_p.h"

namespace QtAws {
namespace MachineLearning {

class CreateDataSourceFromS3Response;

class CreateDataSourceFromS3ResponsePrivate : public MachineLearningResponsePrivate {

public:

    explicit CreateDataSourceFromS3ResponsePrivate(CreateDataSourceFromS3Response * const q);

    void parseCreateDataSourceFromS3Response(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDataSourceFromS3Response)
    Q_DISABLE_COPY(CreateDataSourceFromS3ResponsePrivate)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
