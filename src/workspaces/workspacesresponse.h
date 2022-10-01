// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WORKSPACESRESPONSE_H
#define QTAWS_WORKSPACESRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsworkspacesglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace WorkSpaces {

class WorkSpacesResponsePrivate;

class QTAWSWORKSPACES_EXPORT WorkSpacesResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    WorkSpacesResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    WorkSpacesResponse(WorkSpacesResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(WorkSpacesResponse)
    Q_DISABLE_COPY(WorkSpacesResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
