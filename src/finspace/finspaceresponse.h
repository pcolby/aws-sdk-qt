// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FINSPACERESPONSE_H
#define QTAWS_FINSPACERESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsfinspaceglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Finspace {

class FinspaceResponsePrivate;

class QTAWSFINSPACE_EXPORT FinspaceResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    FinspaceResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    FinspaceResponse(FinspaceResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(FinspaceResponse)
    Q_DISABLE_COPY(FinspaceResponse)

};

} // namespace Finspace
} // namespace QtAws

#endif
