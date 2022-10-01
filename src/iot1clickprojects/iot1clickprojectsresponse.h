// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOT1CLICKPROJECTSRESPONSE_H
#define QTAWS_IOT1CLICKPROJECTSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsiot1clickprojectsglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace IoT1ClickProjects {

class IoT1ClickProjectsResponsePrivate;

class QTAWSIOT1CLICKPROJECTS_EXPORT IoT1ClickProjectsResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    IoT1ClickProjectsResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    IoT1ClickProjectsResponse(IoT1ClickProjectsResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IoT1ClickProjectsResponse)
    Q_DISABLE_COPY(IoT1ClickProjectsResponse)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
