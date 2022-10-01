// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHOBJECTREQUEST_H
#define QTAWS_ATTACHOBJECTREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class AttachObjectRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT AttachObjectRequest : public CloudDirectoryRequest {

public:
    AttachObjectRequest(const AttachObjectRequest &other);
    AttachObjectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachObjectRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
