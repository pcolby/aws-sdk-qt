// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHOBJECTREQUEST_H
#define QTAWS_DETACHOBJECTREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class DetachObjectRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT DetachObjectRequest : public CloudDirectoryRequest {

public:
    DetachObjectRequest(const DetachObjectRequest &other);
    DetachObjectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachObjectRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
