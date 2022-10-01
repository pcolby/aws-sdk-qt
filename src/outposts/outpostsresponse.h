// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_OUTPOSTSRESPONSE_H
#define QTAWS_OUTPOSTSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsoutpostsglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Outposts {

class OutpostsResponsePrivate;

class QTAWSOUTPOSTS_EXPORT OutpostsResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    OutpostsResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    OutpostsResponse(OutpostsResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(OutpostsResponse)
    Q_DISABLE_COPY(OutpostsResponse)

};

} // namespace Outposts
} // namespace QtAws

#endif
