// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IVSRESPONSE_H
#define QTAWS_IVSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsivsglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Ivs {

class IvsResponsePrivate;

class QTAWSIVS_EXPORT IvsResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    IvsResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    IvsResponse(IvsResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IvsResponse)
    Q_DISABLE_COPY(IvsResponse)

};

} // namespace Ivs
} // namespace QtAws

#endif
