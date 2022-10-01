// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECERTIFICATESREQUEST_H
#define QTAWS_DESCRIBECERTIFICATESREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeCertificatesRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT DescribeCertificatesRequest : public DatabaseMigrationRequest {

public:
    DescribeCertificatesRequest(const DescribeCertificatesRequest &other);
    DescribeCertificatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCertificatesRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
