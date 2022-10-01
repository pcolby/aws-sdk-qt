// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LAKEFORMATIONRESPONSE_H
#define QTAWS_LAKEFORMATIONRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawslakeformationglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace LakeFormation {

class LakeFormationResponsePrivate;

class QTAWSLAKEFORMATION_EXPORT LakeFormationResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    LakeFormationResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    LakeFormationResponse(LakeFormationResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(LakeFormationResponse)
    Q_DISABLE_COPY(LakeFormationResponse)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
