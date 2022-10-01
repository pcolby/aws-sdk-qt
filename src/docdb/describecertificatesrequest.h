// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECERTIFICATESREQUEST_H
#define QTAWS_DESCRIBECERTIFICATESREQUEST_H

#include "docdbrequest.h"

namespace QtAws {
namespace DocDb {

class DescribeCertificatesRequestPrivate;

class QTAWSDOCDB_EXPORT DescribeCertificatesRequest : public DocDbRequest {

public:
    DescribeCertificatesRequest(const DescribeCertificatesRequest &other);
    DescribeCertificatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCertificatesRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
