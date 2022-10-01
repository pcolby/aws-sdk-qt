// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECERTIFICATESREQUEST_P_H
#define QTAWS_DESCRIBECERTIFICATESREQUEST_P_H

#include "docdbrequest_p.h"
#include "describecertificatesrequest.h"

namespace QtAws {
namespace DocDb {

class DescribeCertificatesRequest;

class DescribeCertificatesRequestPrivate : public DocDbRequestPrivate {

public:
    DescribeCertificatesRequestPrivate(const DocDbRequest::Action action,
                                   DescribeCertificatesRequest * const q);
    DescribeCertificatesRequestPrivate(const DescribeCertificatesRequestPrivate &other,
                                   DescribeCertificatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCertificatesRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
