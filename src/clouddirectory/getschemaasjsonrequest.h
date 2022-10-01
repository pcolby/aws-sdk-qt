// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSCHEMAASJSONREQUEST_H
#define QTAWS_GETSCHEMAASJSONREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class GetSchemaAsJsonRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT GetSchemaAsJsonRequest : public CloudDirectoryRequest {

public:
    GetSchemaAsJsonRequest(const GetSchemaAsJsonRequest &other);
    GetSchemaAsJsonRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSchemaAsJsonRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
