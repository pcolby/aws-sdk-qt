// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DRSRESPONSE_H
#define QTAWS_DRSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsdrsglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Drs {

class DrsResponsePrivate;

class QTAWSDRS_EXPORT DrsResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    DrsResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    DrsResponse(DrsResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DrsResponse)
    Q_DISABLE_COPY(DrsResponse)

};

} // namespace Drs
} // namespace QtAws

#endif
