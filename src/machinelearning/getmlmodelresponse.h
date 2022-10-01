// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMLMODELRESPONSE_H
#define QTAWS_GETMLMODELRESPONSE_H

#include "machinelearningresponse.h"
#include "getmlmodelrequest.h"

namespace QtAws {
namespace MachineLearning {

class GetMLModelResponsePrivate;

class QTAWSMACHINELEARNING_EXPORT GetMLModelResponse : public MachineLearningResponse {
    Q_OBJECT

public:
    GetMLModelResponse(const GetMLModelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMLModelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMLModelResponse)
    Q_DISABLE_COPY(GetMLModelResponse)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
