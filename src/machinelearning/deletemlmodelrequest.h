// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMLMODELREQUEST_H
#define QTAWS_DELETEMLMODELREQUEST_H

#include "machinelearningrequest.h"

namespace QtAws {
namespace MachineLearning {

class DeleteMLModelRequestPrivate;

class QTAWSMACHINELEARNING_EXPORT DeleteMLModelRequest : public MachineLearningRequest {

public:
    DeleteMLModelRequest(const DeleteMLModelRequest &other);
    DeleteMLModelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMLModelRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
