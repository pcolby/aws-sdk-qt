// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SSMINCIDENTSRESPONSE_H
#define QTAWS_SSMINCIDENTSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsssmincidentsglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace SsmIncidents {

class SsmIncidentsResponsePrivate;

class QTAWSSSMINCIDENTS_EXPORT SsmIncidentsResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    SsmIncidentsResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    SsmIncidentsResponse(SsmIncidentsResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SsmIncidentsResponse)
    Q_DISABLE_COPY(SsmIncidentsResponse)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
