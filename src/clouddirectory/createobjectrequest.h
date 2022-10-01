// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEOBJECTREQUEST_H
#define QTAWS_CREATEOBJECTREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class CreateObjectRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT CreateObjectRequest : public CloudDirectoryRequest {

public:
    CreateObjectRequest(const CreateObjectRequest &other);
    CreateObjectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateObjectRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
