// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASOURCEFROMRDSRESPONSE_P_H
#define QTAWS_CREATEDATASOURCEFROMRDSRESPONSE_P_H

#include "machinelearningresponse_p.h"

namespace QtAws {
namespace MachineLearning {

class CreateDataSourceFromRDSResponse;

class CreateDataSourceFromRDSResponsePrivate : public MachineLearningResponsePrivate {

public:

    explicit CreateDataSourceFromRDSResponsePrivate(CreateDataSourceFromRDSResponse * const q);

    void parseCreateDataSourceFromRDSResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDataSourceFromRDSResponse)
    Q_DISABLE_COPY(CreateDataSourceFromRDSResponsePrivate)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
