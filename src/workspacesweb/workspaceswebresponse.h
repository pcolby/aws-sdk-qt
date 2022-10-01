// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WORKSPACESWEBRESPONSE_H
#define QTAWS_WORKSPACESWEBRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsworkspaceswebglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace WorkSpacesWeb {

class WorkSpacesWebResponsePrivate;

class QTAWSWORKSPACESWEB_EXPORT WorkSpacesWebResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    WorkSpacesWebResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    WorkSpacesWebResponse(WorkSpacesWebResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(WorkSpacesWebResponse)
    Q_DISABLE_COPY(WorkSpacesWebResponse)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
