// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVERCERTIFICATESREQUEST_H
#define QTAWS_LISTSERVERCERTIFICATESREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class ListServerCertificatesRequestPrivate;

class QTAWSIAM_EXPORT ListServerCertificatesRequest : public IamRequest {

public:
    ListServerCertificatesRequest(const ListServerCertificatesRequest &other);
    ListServerCertificatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListServerCertificatesRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
