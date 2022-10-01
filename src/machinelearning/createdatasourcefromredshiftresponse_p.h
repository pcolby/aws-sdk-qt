// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASOURCEFROMREDSHIFTRESPONSE_P_H
#define QTAWS_CREATEDATASOURCEFROMREDSHIFTRESPONSE_P_H

#include "machinelearningresponse_p.h"

namespace QtAws {
namespace MachineLearning {

class CreateDataSourceFromRedshiftResponse;

class CreateDataSourceFromRedshiftResponsePrivate : public MachineLearningResponsePrivate {

public:

    explicit CreateDataSourceFromRedshiftResponsePrivate(CreateDataSourceFromRedshiftResponse * const q);

    void parseCreateDataSourceFromRedshiftResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDataSourceFromRedshiftResponse)
    Q_DISABLE_COPY(CreateDataSourceFromRedshiftResponsePrivate)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
