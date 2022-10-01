// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECERTIFICATESREQUEST_P_H
#define QTAWS_DESCRIBECERTIFICATESREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "describecertificatesrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeCertificatesRequest;

class DescribeCertificatesRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    DescribeCertificatesRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   DescribeCertificatesRequest * const q);
    DescribeCertificatesRequestPrivate(const DescribeCertificatesRequestPrivate &other,
                                   DescribeCertificatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCertificatesRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
