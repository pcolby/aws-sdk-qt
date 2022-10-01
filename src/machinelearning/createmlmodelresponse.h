// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMLMODELRESPONSE_H
#define QTAWS_CREATEMLMODELRESPONSE_H

#include "machinelearningresponse.h"
#include "createmlmodelrequest.h"

namespace QtAws {
namespace MachineLearning {

class CreateMLModelResponsePrivate;

class QTAWSMACHINELEARNING_EXPORT CreateMLModelResponse : public MachineLearningResponse {
    Q_OBJECT

public:
    CreateMLModelResponse(const CreateMLModelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateMLModelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMLModelResponse)
    Q_DISABLE_COPY(CreateMLModelResponse)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
