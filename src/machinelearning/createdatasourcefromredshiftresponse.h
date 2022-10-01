// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASOURCEFROMREDSHIFTRESPONSE_H
#define QTAWS_CREATEDATASOURCEFROMREDSHIFTRESPONSE_H

#include "machinelearningresponse.h"
#include "createdatasourcefromredshiftrequest.h"

namespace QtAws {
namespace MachineLearning {

class CreateDataSourceFromRedshiftResponsePrivate;

class QTAWSMACHINELEARNING_EXPORT CreateDataSourceFromRedshiftResponse : public MachineLearningResponse {
    Q_OBJECT

public:
    CreateDataSourceFromRedshiftResponse(const CreateDataSourceFromRedshiftRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDataSourceFromRedshiftRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDataSourceFromRedshiftResponse)
    Q_DISABLE_COPY(CreateDataSourceFromRedshiftResponse)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
