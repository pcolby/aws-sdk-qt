// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATASOURCERESPONSE_H
#define QTAWS_GETDATASOURCERESPONSE_H

#include "machinelearningresponse.h"
#include "getdatasourcerequest.h"

namespace QtAws {
namespace MachineLearning {

class GetDataSourceResponsePrivate;

class QTAWSMACHINELEARNING_EXPORT GetDataSourceResponse : public MachineLearningResponse {
    Q_OBJECT

public:
    GetDataSourceResponse(const GetDataSourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDataSourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDataSourceResponse)
    Q_DISABLE_COPY(GetDataSourceResponse)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
