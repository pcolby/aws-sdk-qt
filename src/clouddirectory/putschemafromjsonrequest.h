// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSCHEMAFROMJSONREQUEST_H
#define QTAWS_PUTSCHEMAFROMJSONREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class PutSchemaFromJsonRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT PutSchemaFromJsonRequest : public CloudDirectoryRequest {

public:
    PutSchemaFromJsonRequest(const PutSchemaFromJsonRequest &other);
    PutSchemaFromJsonRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutSchemaFromJsonRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
