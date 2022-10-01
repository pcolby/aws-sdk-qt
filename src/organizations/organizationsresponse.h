// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ORGANIZATIONSRESPONSE_H
#define QTAWS_ORGANIZATIONSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsorganizationsglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Organizations {

class OrganizationsResponsePrivate;

class QTAWSORGANIZATIONS_EXPORT OrganizationsResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    OrganizationsResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    OrganizationsResponse(OrganizationsResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(OrganizationsResponse)
    Q_DISABLE_COPY(OrganizationsResponse)

};

} // namespace Organizations
} // namespace QtAws

#endif
