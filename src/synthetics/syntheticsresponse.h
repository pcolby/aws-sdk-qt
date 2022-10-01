// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SYNTHETICSRESPONSE_H
#define QTAWS_SYNTHETICSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawssyntheticsglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Synthetics {

class SyntheticsResponsePrivate;

class QTAWSSYNTHETICS_EXPORT SyntheticsResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    SyntheticsResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    SyntheticsResponse(SyntheticsResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SyntheticsResponse)
    Q_DISABLE_COPY(SyntheticsResponse)

};

} // namespace Synthetics
} // namespace QtAws

#endif
