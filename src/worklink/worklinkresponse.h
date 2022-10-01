// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WORKLINKRESPONSE_H
#define QTAWS_WORKLINKRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsworklinkglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace WorkLink {

class WorkLinkResponsePrivate;

class QTAWSWORKLINK_EXPORT WorkLinkResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    WorkLinkResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    WorkLinkResponse(WorkLinkResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(WorkLinkResponse)
    Q_DISABLE_COPY(WorkLinkResponse)

};

} // namespace WorkLink
} // namespace QtAws

#endif
