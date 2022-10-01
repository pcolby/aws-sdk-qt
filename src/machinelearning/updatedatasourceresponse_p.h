// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATASOURCERESPONSE_P_H
#define QTAWS_UPDATEDATASOURCERESPONSE_P_H

#include "machinelearningresponse_p.h"

namespace QtAws {
namespace MachineLearning {

class UpdateDataSourceResponse;

class UpdateDataSourceResponsePrivate : public MachineLearningResponsePrivate {

public:

    explicit UpdateDataSourceResponsePrivate(UpdateDataSourceResponse * const q);

    void parseUpdateDataSourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDataSourceResponse)
    Q_DISABLE_COPY(UpdateDataSourceResponsePrivate)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
