// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVERCERTIFICATETAGSREQUEST_H
#define QTAWS_LISTSERVERCERTIFICATETAGSREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class ListServerCertificateTagsRequestPrivate;

class QTAWSIAM_EXPORT ListServerCertificateTagsRequest : public IamRequest {

public:
    ListServerCertificateTagsRequest(const ListServerCertificateTagsRequest &other);
    ListServerCertificateTagsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListServerCertificateTagsRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
