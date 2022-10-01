// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLYSCHEMAREQUEST_H
#define QTAWS_APPLYSCHEMAREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ApplySchemaRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT ApplySchemaRequest : public CloudDirectoryRequest {

public:
    ApplySchemaRequest(const ApplySchemaRequest &other);
    ApplySchemaRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ApplySchemaRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
