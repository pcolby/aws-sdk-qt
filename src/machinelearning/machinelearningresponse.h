// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MACHINELEARNINGRESPONSE_H
#define QTAWS_MACHINELEARNINGRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsmachinelearningglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace MachineLearning {

class MachineLearningResponsePrivate;

class QTAWSMACHINELEARNING_EXPORT MachineLearningResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    MachineLearningResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    MachineLearningResponse(MachineLearningResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MachineLearningResponse)
    Q_DISABLE_COPY(MachineLearningResponse)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
