// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLIEDSCHEMAVERSIONREQUEST_H
#define QTAWS_GETAPPLIEDSCHEMAVERSIONREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class GetAppliedSchemaVersionRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT GetAppliedSchemaVersionRequest : public CloudDirectoryRequest {

public:
    GetAppliedSchemaVersionRequest(const GetAppliedSchemaVersionRequest &other);
    GetAppliedSchemaVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAppliedSchemaVersionRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
