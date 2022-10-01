// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SWFRESPONSE_H
#define QTAWS_SWFRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsswfglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Swf {

class SwfResponsePrivate;

class QTAWSSWF_EXPORT SwfResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    SwfResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    SwfResponse(SwfResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SwfResponse)
    Q_DISABLE_COPY(SwfResponse)

};

} // namespace Swf
} // namespace QtAws

#endif
