// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GRAFANARESPONSE_H
#define QTAWS_GRAFANARESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsgrafanaglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Grafana {

class GrafanaResponsePrivate;

class QTAWSGRAFANA_EXPORT GrafanaResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    GrafanaResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    GrafanaResponse(GrafanaResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GrafanaResponse)
    Q_DISABLE_COPY(GrafanaResponse)

};

} // namespace Grafana
} // namespace QtAws

#endif
