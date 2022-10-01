// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEVOPSGURURESPONSE_H
#define QTAWS_DEVOPSGURURESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsdevopsguruglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace DevOpsGuru {

class DevOpsGuruResponsePrivate;

class QTAWSDEVOPSGURU_EXPORT DevOpsGuruResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    DevOpsGuruResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    DevOpsGuruResponse(DevOpsGuruResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DevOpsGuruResponse)
    Q_DISABLE_COPY(DevOpsGuruResponse)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
