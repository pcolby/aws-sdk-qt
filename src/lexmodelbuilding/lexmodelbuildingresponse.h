// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LEXMODELBUILDINGRESPONSE_H
#define QTAWS_LEXMODELBUILDINGRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawslexmodelbuildingglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace LexModelBuilding {

class LexModelBuildingResponsePrivate;

class QTAWSLEXMODELBUILDING_EXPORT LexModelBuildingResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    LexModelBuildingResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    LexModelBuildingResponse(LexModelBuildingResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(LexModelBuildingResponse)
    Q_DISABLE_COPY(LexModelBuildingResponse)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
