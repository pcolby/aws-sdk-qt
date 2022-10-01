// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDSEARCHDOMAINRESPONSE_H
#define QTAWS_CLOUDSEARCHDOMAINRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawscloudsearchdomainglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace CloudSearchDomain {

class CloudSearchDomainResponsePrivate;

class QTAWSCLOUDSEARCHDOMAIN_EXPORT CloudSearchDomainResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    CloudSearchDomainResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    CloudSearchDomainResponse(CloudSearchDomainResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CloudSearchDomainResponse)
    Q_DISABLE_COPY(CloudSearchDomainResponse)

};

} // namespace CloudSearchDomain
} // namespace QtAws

#endif
