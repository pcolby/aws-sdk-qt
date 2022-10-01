// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_OPSWORKSRESPONSE_H
#define QTAWS_OPSWORKSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsopsworksglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace OpsWorks {

class OpsWorksResponsePrivate;

class QTAWSOPSWORKS_EXPORT OpsWorksResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    OpsWorksResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    OpsWorksResponse(OpsWorksResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(OpsWorksResponse)
    Q_DISABLE_COPY(OpsWorksResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
