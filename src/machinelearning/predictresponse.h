// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PREDICTRESPONSE_H
#define QTAWS_PREDICTRESPONSE_H

#include "machinelearningresponse.h"
#include "predictrequest.h"

namespace QtAws {
namespace MachineLearning {

class PredictResponsePrivate;

class QTAWSMACHINELEARNING_EXPORT PredictResponse : public MachineLearningResponse {
    Q_OBJECT

public:
    PredictResponse(const PredictRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PredictRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PredictResponse)
    Q_DISABLE_COPY(PredictResponse)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
