// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASOURCEFROMRDSRESPONSE_H
#define QTAWS_CREATEDATASOURCEFROMRDSRESPONSE_H

#include "machinelearningresponse.h"
#include "createdatasourcefromrdsrequest.h"

namespace QtAws {
namespace MachineLearning {

class CreateDataSourceFromRDSResponsePrivate;

class QTAWSMACHINELEARNING_EXPORT CreateDataSourceFromRDSResponse : public MachineLearningResponse {
    Q_OBJECT

public:
    CreateDataSourceFromRDSResponse(const CreateDataSourceFromRDSRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDataSourceFromRDSRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDataSourceFromRDSResponse)
    Q_DISABLE_COPY(CreateDataSourceFromRDSResponse)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
