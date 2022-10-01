// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMLMODELRESPONSE_H
#define QTAWS_UPDATEMLMODELRESPONSE_H

#include "machinelearningresponse.h"
#include "updatemlmodelrequest.h"

namespace QtAws {
namespace MachineLearning {

class UpdateMLModelResponsePrivate;

class QTAWSMACHINELEARNING_EXPORT UpdateMLModelResponse : public MachineLearningResponse {
    Q_OBJECT

public:
    UpdateMLModelResponse(const UpdateMLModelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateMLModelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMLModelResponse)
    Q_DISABLE_COPY(UpdateMLModelResponse)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
