// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMLMODELRESPONSE_H
#define QTAWS_DELETEMLMODELRESPONSE_H

#include "machinelearningresponse.h"
#include "deletemlmodelrequest.h"

namespace QtAws {
namespace MachineLearning {

class DeleteMLModelResponsePrivate;

class QTAWSMACHINELEARNING_EXPORT DeleteMLModelResponse : public MachineLearningResponse {
    Q_OBJECT

public:
    DeleteMLModelResponse(const DeleteMLModelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteMLModelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMLModelResponse)
    Q_DISABLE_COPY(DeleteMLModelResponse)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
