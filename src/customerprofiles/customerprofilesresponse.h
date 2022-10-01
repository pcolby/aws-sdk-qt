// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CUSTOMERPROFILESRESPONSE_H
#define QTAWS_CUSTOMERPROFILESRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawscustomerprofilesglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace CustomerProfiles {

class CustomerProfilesResponsePrivate;

class QTAWSCUSTOMERPROFILES_EXPORT CustomerProfilesResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    CustomerProfilesResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    CustomerProfilesResponse(CustomerProfilesResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CustomerProfilesResponse)
    Q_DISABLE_COPY(CustomerProfilesResponse)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
