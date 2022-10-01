// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSCHEMAEXTENSIONSREQUEST_H
#define QTAWS_LISTSCHEMAEXTENSIONSREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class ListSchemaExtensionsRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT ListSchemaExtensionsRequest : public DirectoryServiceRequest {

public:
    ListSchemaExtensionsRequest(const ListSchemaExtensionsRequest &other);
    ListSchemaExtensionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSchemaExtensionsRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
